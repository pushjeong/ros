import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry

class PedestrianMover(Node):
    def __init__(self):
        super().__init__('move_pedestrian')

        # 리맵핑된 퍼블리셔 및 서브스크라이버 설정
        self.command_publisher = self.create_publisher(Twist, '/move_pedestrian_ns/cmd_vel', 10)
        self.odom_subscriber = self.create_subscription(
            Odometry,
            '/move_pedestrian_ns/odom',  # 리맵핑된 토픽 사용
            self.odom_update_callback,
            10
        )

        # 타이머 설정
        self.create_timer(0.1, self.publish_movement_command)

        # 초기 상태 설정
        self.movement_direction = 1  # 이동 방향
        self.twist_command = Twist()
        self.current_x_position = None  # 현재 x 위치

        # x 위치의 경계 설정 (보행 경로 경계)
        self.x_boundary_lower = 127.0
        self.x_boundary_upper = 138.0

        # 이동 속도 설정 (1.1 m/s)
        self.walking_speed = 1.1

    def odom_update_callback(self, odom_data: Odometry):
        """현재 x 위치를 업데이트하고 이동 방향을 전환합니다."""
        self.current_x_position = odom_data.pose.pose.position.x

        # 이동 방향 전환
        if self.movement_direction == 1 and self.current_x_position >= self.x_boundary_upper:
            self.movement_direction = -1
        elif self.movement_direction == -1 and self.current_x_position <= self.x_boundary_lower:
            self.movement_direction = 1

    def publish_movement_command(self):
        """보행자의 이동 명령을 퍼블리시합니다."""
        self.twist_command.linear.x = self.walking_speed * self.movement_direction
        self.command_publisher.publish(self.twist_command)

def main(args=None):
    rclpy.init(args=args)
    pedestrian_mover_node = PedestrianMover()
    rclpy.spin(pedestrian_mover_node)  # 노드 실행
    pedestrian_mover_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()


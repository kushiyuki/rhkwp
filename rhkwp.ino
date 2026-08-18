// ⚠️ 보라색 보드 초록 터미널 옆 P 숫자를 확인 후 맞추세요!
// 아래 숫자는 예시입니다. (P12, P13, P14, P27로 가정)
const int LEFT_MOTOR_IN1 = 12;
const int LEFT_MOTOR_IN2 = 13;
const int RIGHT_MOTOR_IN3 = 14;
const int RIGHT_MOTOR_IN4 = 27;

void setup() {
  Serial.begin(115200);

  pinMode(LEFT_MOTOR_IN1, OUTPUT);
  pinMode(LEFT_MOTOR_IN2, OUTPUT);
  pinMode(RIGHT_MOTOR_IN3, OUTPUT);
  pinMode(RIGHT_MOTOR_IN4, OUTPUT);

  Serial.println("하드웨어 테스트 시작!");
}

void loop() {
  // 3초간 전진
  Serial.println("전진!");
  digitalWrite(LEFT_MOTOR_IN1, HIGH);
  digitalWrite(LEFT_MOTOR_IN2, LOW);
  digitalWrite(RIGHT_MOTOR_IN3, HIGH);
  digitalWrite(RIGHT_MOTOR_IN4, LOW);
  delay(3000);

  // 3초간 정지
  Serial.println("정지!");
  digitalWrite(LEFT_MOTOR_IN1, LOW);
  digitalWrite(LEFT_MOTOR_IN2, LOW);
  digitalWrite(RIGHT_MOTOR_IN3, LOW);
  digitalWrite(RIGHT_MOTOR_IN4, LOW);
  delay(3000);
}
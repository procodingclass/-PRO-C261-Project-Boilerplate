/* ESP32 Servo Sweep */
const int servoPin = 13;  /* GPIO13 */

int dutyCycle = 0;

const int PWMFreq = 50;
const int PWMChannel = 0;
const int PWMResolution = 8;

void setup()
{  
  Serial.begin(115200);
  ledcSetup(PWMChannel, PWMFreq, PWMResolution);
  /* Attach the LED PWM Channel to the GPIO Pin */
  

}
void loop()
{
  /*write a for loop to rotate the servo motor 180 degrees in clockwise direction */




  /*write a for loop to rotate the servo motor 180 degrees in anti-clockwise direction */



}



























// const int Servo_control_pin = 13;

// void setup() {
//   Serial.begin(9600);
//   pinMode(Servo_control_pin, OUTPUT);
// }


// void loop() {
//   for (int i = 0; i < 50; i++) {
//     digitalWrite(Servo_control_pin, HIGH);
//     delayMicroseconds(480);
//     digitalWrite(Servo_control_pin, LOW);
//     delayMicroseconds(19520);
//   }//0º
//   delay(3000);
//   for (int i = 0; i < 50; i++) {
//     digitalWrite(Servo_control_pin, HIGH);
//     delayMicroseconds(1230);
//     digitalWrite(Servo_control_pin, LOW);
//     delayMicroseconds(18780);
//   }//90º
//   delay(3000);
//   for (int i = 0; i < 50; i++) {
//     digitalWrite(Servo_control_pin, HIGH);
//     delayMicroseconds(2091);
//     digitalWrite(Servo_control_pin, LOW);
//     delayMicroseconds(17909);
//   }//180º
//   delay(3000);
// for (int i = 0; i < 50; i++) {
//     digitalWrite(Servo_control_pin, HIGH);
//     delayMicroseconds(1693);
//     digitalWrite(Servo_control_pin, LOW);
//     delayMicroseconds(18301);
//   }//135º
//   delay(3000);
// }

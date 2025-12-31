#include <LiquidCrystal.h> 
// LCD pins: RS=8, E=9, D4=10, D5=11, D6=12, D7=13 
LiquidCrystal lcd(8, 9, 10, 11, 12, 13); 
const int ECHO_PIN = A4;   // Echo pin 
const int TRIG_PIN = A5;   // Trigger pin 
const int BUZZER_PIN = 6;  // Buzzer pin 
int thresholdDist = 50;    // distance threshold in cm 
void setup() { 
pinMode(ECHO_PIN, INPUT); 
pinMode(TRIG_PIN, OUTPUT); 
pinMode(BUZZER_PIN, OUTPUT); 
Serial.begin(9600); 
lcd.begin(16, 2); 
lcd.setCursor(0, 0); 
lcd.print("Ultrasonic Sensor"); 
delay(1000); 
lcd.clear(); 
} 
void loop() { 
// Send 10us pulse to trigger pin 
digitalWrite(TRIG_PIN, LOW); 
delayMicroseconds(2); 
digitalWrite(TRIG_PIN, HIGH); 
delayMicroseconds(10); 
digitalWrite(TRIG_PIN, LOW); 
// Read echo time 
float duration = pulseIn(ECHO_PIN, HIGH); 
// Convert to cm 
float dist = 0.01723 * duration; 
// Print to Serial Monitor 
Serial.print("Distance: "); 
Serial.print(dist); 
Serial.println(" cm"); 
// Display on LCD 
lcd.setCursor(0, 0); 
lcd.print("Distance:      
lcd.setCursor(0, 1); 
lcd.print(dist); 
 "); // clear previous 
lcd.print(" cm   "); // overwrite old digits 
// Buzzer alert if within threshold 
if (dist > 0 && dist <= thresholdDist) { 
tone(BUZZER_PIN, 800, 500);  // buzzer on (800Hz for 0.5s) 
} else { 
noTone(BUZZER_PIN);         
} 
delay(500); 
}

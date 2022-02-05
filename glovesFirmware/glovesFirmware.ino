#include "HID-Project.h"

#define EKG1_PIN 10

#define EKG1_THRESHOLD 800

#define FINGER_L_PIN A0
#define FINGER_R_PIN A1
#define FINGER_U_PIN A2
#define FINGER_D_PIN A3

#define L_THRESHOLD 700
#define R_THRESHOLD 700
#define U_THRESHOLD 680
#define D_THRESHOLD 720

bool l_prev = false;
bool r_prev = false;
bool u_prev = false;
bool d_prev = false;

int finger_l;
int finger_r;
int finger_u;
int finger_d;

int ekg1_value;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(EKG1_PIN, INPUT);

  pinMode(FINGER_L_PIN, INPUT);
  pinMode(FINGER_R_PIN, INPUT);
  pinMode(FINGER_U_PIN, INPUT);
  pinMode(FINGER_D_PIN, INPUT);

  Serial.print("f_l"); Serial.print(" ");
  Serial.print("f_r"); Serial.print(" ");
  Serial.print("f_u"); Serial.print(" ");
  Serial.println("f_d");

  // Sends a clean report to the host. This is important on any Arduino type.
  Keyboard.begin();
  Mouse.begin();


  delay(5000);
}

void loop() {
  // put your main code here, to run repeatedly:

  //Read the sensors
  ekg1_value = analogRead(EKG1_PIN);
  
  finger_l = analogRead(FINGER_L_PIN);
  finger_r = analogRead(FINGER_R_PIN);
  finger_u = analogRead(FINGER_U_PIN);
  finger_d = analogRead(FINGER_D_PIN);

  Serial.print(ekg1_value); Serial.print(" ");
  Serial.print(finger_l); Serial.print(" ");
  Serial.print(finger_r); Serial.print(" ");
  Serial.print(finger_u); Serial.print(" ");
  Serial.println(finger_d);


  if(finger_l > L_THRESHOLD &&  !l_prev) {
    Keyboard.press('w');
    l_prev = true;
  }else if(finger_l < L_THRESHOLD && l_prev) {
    Keyboard.release('w');
    l_prev = false;
  }

  if(finger_r > R_THRESHOLD) {
    Mouse.click();
  }

  if(finger_u > U_THRESHOLD &&  !u_prev) {
    Keyboard.press('a');
    u_prev = true;
  }else if(finger_u < U_THRESHOLD && u_prev) {
    Keyboard.release('a');
    u_prev = false;
  }

  if(finger_d > D_THRESHOLD &&  !d_prev) {
    Keyboard.press('s');
    d_prev = true;
  }else if(finger_d < D_THRESHOLD && d_prev) {
    Keyboard.release('s');
    d_prev = false;
  }
  
  delay(10);
}

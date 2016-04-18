/* Space sim controller code
 *  
 *  Whenever a switch on the control board is flicked, the input pin goes from HIGH to LOW or from LOW to HIGH. 
 *  When a switch is activated, it will send one keypress, then it must be reset before it can send another keypress
 *  
 *  John zumBrunnen
 *  April 2016
 *  CSH Major Project
 */
#include "Keyboard.h"
int button1Pin = 2; // button 1 input pin
int button1PrevState = LOW; // button 1 last state
int button1CurrState = LOW; // button 1 current reading

int button2Pin = 3; // button 2 input pin
int button2PrevState = LOW; //button 2 last state
int button2CurrState = LOW; // button 2 current reading

int button3Pin = 4; // button 3 input pin
int button3PrevState = LOW; // button 3 last state
int button3CurrState = LOW; // button 3 current reading

int button4Pin = 5; // button 4 input pin
int button4PrevState = LOW; // button 4 last state
int button4CurrState = LOW; // button 4 current reading

int button5Pin = 6; // button 5 input pin
int button5PrevState = LOW; // button 5 last state
int button5CurrState = LOW; // button 5 current reading



void setup() {
  // sets the pin modes to input for each button(n)Pin
  pinMode(button1Pin, INPUT);
  pinMode(button2Pin, INPUT);
  pinMode(button3Pin, INPUT);
  pinMode(button4Pin, INPUT);
  pinMode(button5Pin, INPUT);

 Keyboard.begin();
 Serial.begin(9600);

/*
 * 
 *
 * 
 * 
 * 
 */


}

void loop() {
  // translates the button presses to keypresses

  // BUTTON 1 SWITCH CODE
  button1CurrState = digitalRead(button1Pin);
  if ((button1CurrState == HIGH) && (button1PrevState == LOW)) {
    Serial.println("Switch 1 On");
    Keyboard.write('a') ; 
  }
  button1PrevState = button1CurrState;
 

 // BUTTON 2 SWITCH CODE
  button2CurrState = digitalRead(button2Pin);
  if ((button2CurrState == HIGH) && (button2PrevState == LOW)) {
    Serial.println("Switch 2 On");
    Keyboard.write('b');
  }
  button2PrevState = button2CurrState;


 // BUTTON 3 SWITCH CODE
  button3CurrState = digitalRead(button3Pin);
  if ((button3CurrState == HIGH) && (button3PrevState == LOW)) {
    Serial.println("Switch 3 On");
    Keyboard.write('c');
  }
  button3PrevState = button3CurrState;
/*      
 // BUTTON 4 SWITCH CODEacdbcdacda
  button4CurrState = digitalRead(button4Pin);
  if ((button4CurrState == HIGH) && (button4PrevState == LOW)) {
   cdcdd Serial.println("Switch 4 On");
    
  }
  button4PrevState = button4CurrState;
 */

 // BUTTON 5 SWITCH CODE
  button5CurrState = digitalRead(button5Pin);
  if ((button5CurrState == HIGH) && (button5PrevState == LOW)) {
    Serial.println("Switch 5 On");
    Keyboard.write('d');
  }
  button5PrevState = button5CurrState;
 
  // delay is here to stop repeat presses and I did it this way becuase I'm a lazy bitch.
  delay(10);
}











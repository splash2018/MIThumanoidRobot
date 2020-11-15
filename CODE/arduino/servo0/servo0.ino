//#######################################
//#                                     #
//#     Jcunion group                   #
//#     Eng Marcelo Anjos               #
//#     marcelo@airspacedefense.org     #
//#     marcelu.phd@gmail.com           #
//#     16/01/2013                      #
//#######################################

#include <Arduino.h>
#include <Servo.h>

Servo myservoa, myservob, myservoc, myservod; // create servo object to control a servo
                                              // create servo object to control a servo
// twelve servo objects can be created on most boards

int posA = 0; // variable to store the servo position
int posB = 0; // variable to store the servo position
int posC = 0; // variable to store the servo position
int posD = 0; // variable to store the servo position

void setup()
{
    Serial.begin(115200); //init comunication with usb

  myservoa.attach(8);                                         //the pin for the servoa control
  myservob.attach(9);                                         //the pin for the servob control
  myservoc.attach(10);                                        //the pin for the servoc control
  myservod.attach(11);                                        //the pin for the servod control
  Serial.println("multi-servo-delimit-test-dual-input-auto"); // so I can keep track of what is loaded
}

void loop()
{
  
        myservoa.write(posA);
        delay(1500); // waits 15ms for the servo to reach the position
        Serial.println("multi-servo-delimit-test-dual-input-auto");
     
        myservob.write(posB);
        delay(1500); // waits 15ms for the servo to reach the position
      
        myservoc.write(posC);
        delay(1500); // waits 15ms for the servo to reach the position
       
        myservod.write(posD);
        delay(1500); // waits 15ms for the servo to reach the position
       

}

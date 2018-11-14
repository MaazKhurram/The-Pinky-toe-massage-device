/* Coded by Maaz Khurram. Last update = 19 August 2017
 *  should Take 1.58 secs to complate one half of the vibration And 3.166 secs approximately for 1 complete vibration.
 *
 *
 *
*/


#include <Password.h> //http://playground.arduino.cc/uploads/Code/Password.zip //tells to use password library
#include <Keypad.h> //http://www.arduino.cc/playground/uploads/Code/Keypad.zip  //tells to use keypad library
#include <Servo.h>

unsigned long mainClock; // clock to notice the time when the task starts



class Sweeper     // pin 10 servo is called servo1
// pin 11 servo is called servo2
{
    Servo servo1;
    Servo servo2;// the servo
    int pos1;
    int pos2;// current servo position
    int increment1;        // increment to move for each interval
    int increment2;
    int  updateInterval1;
    int  updateInterval2;// interval between updates
    unsigned long lastUpdate1; // last update of position
    unsigned long lastUpdate2;

  public:
    Sweeper(int wtf)
    {
      int interval = 15;  // starting interval

      updateInterval1 = interval;
      updateInterval2 = interval;

      increment1 = 1;
      increment2 = 1;
    }

    void Attach1(int pin)
    {
      servo1.attach(pin);
    }
    void Attach2(int pin)
    {
      servo2.attach(pin);
    }

    void Detach()
    {
      servo1.detach();
      servo2.detach();
    }

    void BackToZero()     //  to set servos to 10 degrees after the task is completed
    {
      servo1.write(10);
      servo2.write(10);
    }

    void Update11()  // first digit after "Update" is mode number, second digit= servo number
    // pin 10 servo called servo1 and pin 11 servo called servo2
    // Update11() means mode 1 and servo to be updated is servo on pin 10

    // mode1= 20 degrees turn
    {

      if ((millis() - lastUpdate1) > updateInterval1) // time to update
      {
        if (increment1 == -1)
        {

          updateInterval1 = updateInterval1 - 20;
          Serial.print("updateInterval1 is ");
          Serial.println(updateInterval1);
        }
        else if (increment1 == 1) {

          updateInterval1 = updateInterval1 + 20;
          Serial.print("updateInterval1 is ");
          Serial.println(updateInterval1);

        }
        lastUpdate1 = millis();
        pos1 += increment1;
        servo1.write(pos1);
        Serial.println(pos1);
        if ((pos1 >= 20) || (pos1 <= 0)) // end of sweep
        {
          // reverse direction
          increment1 = -increment1;
        }
      }
    }


    void Update12()
    {

      if ((millis() - lastUpdate2) > updateInterval2) // time to update
      {
        if (increment2 == -1)
        {
          // intervalmaxer2=intervalmaxer2-2;
          updateInterval2 = updateInterval2 - 20;

          Serial.print("updateInterval2 is ");
          Serial.println(updateInterval2);
        }
        else if (increment2 == 1) {
          // intervalmaxer2=intervalmaxer2+2;
          updateInterval2 = updateInterval2 + 20;

          Serial.print("updateInterval2 is ");
          Serial.println(updateInterval2);
        }

        lastUpdate2 = millis();
        pos2 += increment2;
        servo2.write(pos2);
        Serial.println(pos2);
        if ((pos2 >= 20) || (pos2 <= 0)) // end of sweep
        {
          // reverse direction
          increment2 = -increment2;
        }
      }
    }

    void Update21()   // for mode 2
    //  mode 2 = 25 degrees turn
    {

      if ((millis() - lastUpdate1) > updateInterval1) // time to update
      {
        if (increment1 == -1)
        {

          updateInterval1 = updateInterval1 - 25;
          Serial.print("updateInterval1 is ");
          Serial.println(updateInterval1);
        }
        else if (increment1 == 1) {

          updateInterval1 = updateInterval1 + 25;
          Serial.print("updateInterval1 is ");
          Serial.println(updateInterval1);

        }
        lastUpdate1 = millis();
        pos1 += increment1;
        servo1.write(pos1);
        Serial.println(pos1);
        if ((pos1 >= 25) || (pos1 <= 0)) // end of sweep
        {
          // reverse direction
          increment1 = -increment1;
        }
      }
    }


    void Update22()
    {

      if ((millis() - lastUpdate2) > updateInterval2) // time to update
      {
        if (increment2 == -1)
        {
          // intervalmaxer2=intervalmaxer2-2;
          updateInterval2 = updateInterval2 - 25;

          Serial.print("updateInterval2 is ");
          Serial.println(updateInterval2);
        }
        else if (increment2 == 1) {
          // intervalmaxer2=intervalmaxer2+2;
          updateInterval2 = updateInterval2 + 25;

          Serial.print("updateInterval2 is ");
          Serial.println(updateInterval2);
        }

        lastUpdate2 = millis();
        pos2 += increment2;
        servo2.write(pos2);
        Serial.println(pos2);
        if ((pos2 >= 25) || (pos2 <= 0)) // end of sweep
        {
          // reverse direction
          increment2 = -increment2;
        }
      }
    }

    void Update31()  // for mode 3
    // mode 3 = 30 degrees turn
    {

      if ((millis() - lastUpdate1) > updateInterval1) // time to update
      {
        if (increment1 == -1)
        {
          // intervalmaxer1=intervalmaxer1-2;
          updateInterval1 = updateInterval1 - 20;
          Serial.print("updateInterval1 is ");
          Serial.println(updateInterval1);
        }
        else if (increment1 == 1) {
          // intervalmaxer1=intervalmaxer1+2;
          updateInterval1 = updateInterval1 + 20;
          Serial.print("updateInterval1 is ");
          Serial.println(updateInterval1);

        }
        lastUpdate1 = millis();
        pos1 += increment1;
        servo1.write(pos1);
        Serial.println(pos1);
        if ((pos1 >= 30) || (pos1 <= 0)) // end of sweep
        {
          // reverse direction
          increment1 = -increment1;
        }
      }
    }


    void Update32()
    {

      if ((millis() - lastUpdate2) > updateInterval2) // time to update
      {
        if (increment2 == -1)
        {
          // intervalmaxer2=intervalmaxer2-2;
          updateInterval2 = updateInterval2 - 20;

          Serial.print("updateInterval2 is ");
          Serial.println(updateInterval2);
        }
        else if (increment2 == 1) {
          // intervalmaxer2=intervalmaxer2+2;
          updateInterval2 = updateInterval2 + 20;

          Serial.print("updateInterval2 is ");
          Serial.println(updateInterval2);
        }

        lastUpdate2 = millis();
        pos2 += increment2;
        servo2.write(pos2);
        Serial.println(pos2);
        if ((pos2 >= 30) || (pos2 <= 0)) // end of sweep
        {
          // reverse direction
          increment2 = -increment2;
        }
      }
    }

    void Update41()  // for mode 4
    // mode 4 = 35 degrees turn
    {

      if ((millis() - lastUpdate1) > updateInterval1) // time to update
      {
        if (increment1 == -1)
        {

          updateInterval1 = updateInterval1 - 15;
          Serial.print("updateInterval1 is ");
          Serial.println(updateInterval1);
        }
        else if (increment1 == 1) {

          updateInterval1 = updateInterval1 + 15;
          Serial.print("updateInterval1 is ");
          Serial.println(updateInterval1);

        }
        lastUpdate1 = millis();
        pos1 += increment1;
        servo1.write(pos1);
        Serial.println(pos1);
        if ((pos1 >= 35) || (pos1 <= 0)) // end of sweep
        {
          // reverse direction
          increment1 = -increment1;
        }
      }
    }


    void Update42()
    {

      if ((millis() - lastUpdate2) > updateInterval2) // time to update
      {
        if (increment2 == -1)
        {
          // intervalmaxer2=intervalmaxer2-2;
          updateInterval2 = updateInterval2 - 15;

          Serial.print("updateInterval2 is ");
          Serial.println(updateInterval2);
        }
        else if (increment2 == 1) {
          // intervalmaxer2=intervalmaxer2+2;
          updateInterval2 = updateInterval2 + 15;

          Serial.print("updateInterval2 is ");
          Serial.println(updateInterval2);
        }

        lastUpdate2 = millis();
        pos2 += increment2;
        servo2.write(pos2);
        Serial.println(pos2);
        if ((pos2 >= 35) || (pos2 <= 0)) // end of sweep
        {
          // reverse direction
          increment2 = -increment2;
        }
      }
    }

    void Update51()    // for mode 5
    // mode 5 = 40 degrees turn
    {

      if ((millis() - lastUpdate1) > updateInterval1) // time to update
      {
        if (increment1 == -1)
        {

          updateInterval1 = updateInterval1 - 10;
          Serial.print("updateInterval1 is ");
          Serial.println(updateInterval1);
        }
        else if (increment1 == 1) {

          updateInterval1 = updateInterval1 + 10;
          Serial.print("updateInterval1 is ");
          Serial.println(updateInterval1);

        }
        lastUpdate1 = millis();
        pos1 += increment1;
        servo1.write(pos1);
        Serial.println(pos1);
        if ((pos1 >= 40) || (pos1 <= 0)) // end of sweep
        {
          // reverse direction
          increment1 = -increment1;
        }
      }
    }


    void Update52()
    {

      if ((millis() - lastUpdate2) > updateInterval2) // time to update
      {
        if (increment2 == -1)
        {
          
          updateInterval2 = updateInterval2 - 10;

          Serial.print("updateInterval2 is ");
          Serial.println(updateInterval2);
        }
        else if (increment2 == 1) {
          // intervalmaxer2=intervalmaxer2+2;
          updateInterval2 = updateInterval2 + 10;

          Serial.print("updateInterval2 is ");
          Serial.println(updateInterval2);
        }

        lastUpdate2 = millis();
        pos2 += increment2;
        servo2.write(pos2);
        Serial.println(pos2);
        if ((pos2 >= 40) || (pos2 <= 0)) // end of sweep
        {
          // reverse direction
          increment2 = -increment2;
        }
      }
    }



};



int varPWR = -1, varMIN1 = -1 , varMIN2 = -1; // variables for power, and minutes(first and second digit)



const byte ROWS = 4; // Four rows
const byte COLS = 3; // columns
// Define the Keymap
char keys[ROWS][COLS] = {
  {'1', '2', '3'},
  {'4', '5', '6'},
  {'7', '8', '9'},
  {'*', '0', '#'}
};
// Connect keypad ROW0, ROW1, ROW2 and ROW3 to these Arduino pins.
byte rowPins[ROWS] = { 2, 3, 4, 5 }; // Connect keypad COL0, COL1 and COL2 to these Arduino pins.
byte colPins[COLS] = { 6, 7, 8 };


// Create the Keypad
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );



Sweeper sweeper1(1);
Sweeper sweeper2(1);

int varMinsTotal;


//===============================================================

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);     // setting up serial communication


  



  sweeper1.Attach1(10);     // attaching both servos
  sweeper2.Attach2(11);

  
  keypad.addEventListener(keypadEvent);   //add an event listener for this keypad
   
  
  Serial.println("Please enter mode and minutes in the following form");
  Serial.println("1st digit --> mode");
  Serial.println("2nd digit --> minutes");
  Serial.println("3rd digit --> minutes");


  do {
    keypad.getKey();
  }
  while (varPWR == -1 || varMIN1 == -1 || varMIN2 == -1);

  varMinsTotal = (varMIN1 * 10) + varMIN2;
  Serial.print("Starting the servos at mode ");
  Serial.print(varPWR);
  Serial.print(" for ");
  Serial.print(varMinsTotal);
  Serial.print(" minute(s).");


}



//=========================================================

void loop() {   // put your main code here, to run repeatedly:

  switch (varPWR)
  {

    case 1:       // mode 1
      {
        unsigned long oldMainClock;
        mainClock = millis();
        oldMainClock = mainClock;


        do
        {
          mainClock = millis();
          sweeper1.Update11();
          sweeper2.Update12();


        }
        while (mainClock < (oldMainClock + (varMinsTotal * 60000)));

        sweeper1.BackToZero();
        sweeper2.BackToZero();

        break;

      }


    case 2:       // mode 2
      {

        unsigned long oldMainClock;
        mainClock = millis();
        oldMainClock = mainClock;


        do
        {
          mainClock = millis();
          sweeper1.Update21();
          sweeper2.Update22();

        }
        while (mainClock < (oldMainClock + (varMinsTotal * 60000)));

        sweeper1.BackToZero();
        sweeper2.BackToZero();

        break;

      }


    case 3:         // mode 3
      {
        unsigned long oldMainClock;
        mainClock = millis();
        oldMainClock = mainClock;


        do
        {
          mainClock = millis();
          sweeper1.Update31();
          sweeper2.Update32();

        }
        while (mainClock < (oldMainClock + (varMinsTotal * 60000)));

        sweeper1.BackToZero();
        sweeper2.BackToZero();

        break;
      }

    case 4:         // mode 4
      {
        unsigned long oldMainClock;
        mainClock = millis();
        oldMainClock = mainClock;


        do
        {
          mainClock = millis();
          sweeper1.Update41();
          sweeper2.Update42();

        }
        while (mainClock < (oldMainClock + (varMinsTotal * 60000)));

        sweeper1.BackToZero();
        sweeper2.BackToZero();

        break;

      }

    case 5:         // mode 5
      {
        unsigned long oldMainClock;
        mainClock = millis();
        oldMainClock = mainClock;


        do
        {
          mainClock = millis();
          sweeper1.Update51();
          sweeper2.Update52();

        }
        while (mainClock < (oldMainClock + (varMinsTotal * 60000)));

        sweeper1.BackToZero();
        sweeper2.BackToZero();

        break;

      }

  }

  
  
  for (;;)
  {
    Serial.println("Task complete");
    delay(9999999);                  // long delay in never ending loop
  }


}









//==========================================================

void keypadEvent(KeypadEvent eKey) {



  switch (keypad.getState()) {
    case PRESSED:

      
      delay(100);
      Serial.write(254);
      
  eKeySave(eKey - 48);    // save the entered key 

  }

}

void eKeySave(int num)
{

  static int counter = 0;
  counter++;

  if (num == -6)
  {

    varPWR = -1;    // set all the three variables to -1 initially
    varMIN1 = -1;
    varMIN2 = -1;
    
    counter = 0;
  }


  if (counter == 0)
  {
    Serial.println("Full reset. Enter again!");
  }


  else if (counter == 1)
  {

    
    varPWR = num;   // save the first digit as mode number.
    
  }

  else if (counter == 2)
  {

    
    varMIN1 = num;  // save the second digit as minutes
  }

  else if (counter == 3)
  {

    
    varMIN2 = num;  // save the third digit as minutes.

  }

  else
  {
    Serial.println("Error");
  }

  Serial.println(varPWR);
  Serial.println(varMIN1);
  Serial.println(varMIN2);

}






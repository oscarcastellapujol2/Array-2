/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
 int pin;          // donar nom al pin 5 de l’Arduino
 int wait = 1000;         // assignem valor a l'espera
//********** Setup ****************************************************************
void setup()
{
 for (pin=5; pin<=12 ; pin++)
 {
  pinMode (pin,OUTPUT);
 }
}

//********** Loop *****************************************************************
void loop()
{
  for (pin = 5; pin <=12; pin ++)              // 
  {
    digitalWrite(pin, HIGH);     // posar a 5V el pin CORRESPONENT
    delay(wait);                  // esperem el temps convingut
    digitalWrite(pin, LOW);      // posar a 0V el mateix pin 
    delay(wait);                  // esperem el temps convingut
    digitalWrite(pin, HIGH);     // posar a 5V el pin CORRESPONENT
    delay(wait);                  // esperem el temps convingut
    digitalWrite(pin, LOW);       // posar a 0V el mateix pin 
    delay(wait);                   // esperem el temps convingut
    digitalWrite(pin, HIGH);       // posar a 5V el pin CORRESPONENT
    delay(wait);                  // esperem el temps convingut
    digitalWrite(pin, LOW);      // posar a 0V el mateix pin 
    delay(wait);                  // esperem el temps convingut
  }
}

//********** Funcions *************************************************************

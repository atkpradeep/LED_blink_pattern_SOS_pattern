/*Sketch to blink the LEDs in a series lighting pattern. From a state in which
LEDs are completely off, turn each LED on one after the other with a 500 millisecond
gap until all LEDs are lit. Then turn them all off after a 500-millisecond gap and repeat. */

int ledRed=10;       //int variable for pin 10 as red LED 
int ledGreen=11;     //int variable for pin 11 as green LED 
int ledBlue=12;      //int variable for pin 12 as blue LED 
int ledYellow=13;    //int variable for pin 13 as yellow LED 
int ledDelay=500;    //int delay value 500 millisecond between 2 LED's

void setup() //Main function, starting point
{
    pinMode(ledRed,OUTPUT);     //Pin 10 as output
    pinMode(ledGreen,OUTPUT);   //Pin 11 as output
    pinMode(ledBlue,OUTPUT);    //Pin 12 as output
    pinMode(ledYellow,OUTPUT);  //Pin 13 as output
}

void loop()//Loop until project is running
{
    //Output with analog signal, 0 volt means digital LOW and 5 volt means 1023/5*2 digital value (HIGH)

    analogWrite(ledRed,5);      //turn on red led 
    delay(ledDelay);            //delay for 500 millisecond to turn on green led
    analogWrite(ledGreen,5);    //turn on green led
    delay(ledDelay);            //delay for 500 millisecond to turn on blue led
    analogWrite(ledBlue,5);     //turn on blue led
    delay(ledDelay);            //delay for 500 millisecond to turn on yellow led
    analogWrite(ledYellow,5);   //turn on yellow led
    delay(ledDelay);            //delay for 500 millisecond to turn off all led's
    analogWrite(ledRed,0);
    analogWrite(ledGreen,0);
    analogWrite(ledBlue,0);
    analogWrite(ledYellow,0);
    delay(ledDelay);            //delay for 500 millisecond to repeat loop for turn on led's
}
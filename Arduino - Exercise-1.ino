/* Example for LED blink pattern (SOS pattern)
   Three short blink followed by three long blink and so on*/

//Variable define with value initialization 
int ledPin=10;
int ShortBlinkDelay=250;
int LongBlinkDelay=600;
int noOfTimesBlink=3;

//Main Starting point, execute once while project running
    void setup()
    {
        //Set pin mode to connect LED on it. 
        pinMode(ledPin,OUTPUT);
    } 

//Looping the program until explicitly stop the program
    void loop()
    {
        //Loop for three times short blink with given delay
        for(int i=1;i<=noOfTimesBlink;i=i+1)
        {
            //LED On
            digitalWrite(ledPin,HIGH);
            //Delay between On and Off
            delay(ShortBlinkDelay);
            //LED Off
            digitalWrite(ledPin,LOW);
            delay(ShortBlinkDelay);
        }

        //Loop for three times long blink with given delay
        int i=0;
        while(i<noOfTimesBlink)
        {
            //LED On
            digitalWrite(ledPin,HIGH);
            delay(LongBlinkDelay);
             //LED Off
            digitalWrite(ledPin,LOW);
            //Delay between On and Off
            delay(LongBlinkDelay);
            i++;
        }
    }

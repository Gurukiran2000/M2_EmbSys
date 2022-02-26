
#define airbag_indicator 4
#define airbag1 1
#define airbag2 2
#define airbag3 3

int analogPin =A0;
int val=0;



void setup()
{
 pinMode(analogPin,INPUT);
 pinMode(airbag_indicator,OUTPUT);
 pinMode(airbag1,OUTPUT);
 pinMode(airbag2,OUTPUT);
 pinMode(airbag3,OUTPUT);

}

void loop()
{


val=analogRead(analogPin);

  
  if(val<=250)
  {
    digitalWrite(airbag_indicator,LOW);
    digitalWrite(airbag1,LOW);
    digitalWrite(airbag2,LOW);
    digitalWrite(airbag3,LOW);
  }

  
  
  if(val>250&&val<=500)
  {
    digitalWrite(airbag_indicator,HIGH);
    digitalWrite(airbag1,HIGH);
    digitalWrite(airbag2,LOW);
    digitalWrite(airbag3,LOW);
  }



  
  if(val>500&&val<=750)
  {
    digitalWrite(airbag_indicator,HIGH);
    digitalWrite(airbag1,HIGH);
    digitalWrite(airbag2,HIGH);
    digitalWrite(airbag3,LOW);
  }



  
  if(val<=250)
  {
    digitalWrite(airbag_indicator,HIGH);
    digitalWrite(airbag1,HIGH);
    digitalWrite(airbag2,HIGH);
    digitalWrite(airbag3,HIGH);
  }




}
    
 




    
  

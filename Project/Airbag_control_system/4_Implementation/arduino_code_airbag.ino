
#define airbag_indicator 4 //Indicates whether the airbag is turned ON, independent on the number of airbags opened
#define airbag1 1  //Depicts airbag 1
#define airbag2 2   //Depicts airbag 2
#define airbag3 3    //Depicts airbag 3
     
int analogPin1 =A0; //Crash sensor1 
int analogPin2 =A5; //Crash sensor2 
const char car_on=8; //inorder to indicate that the vehicle is on
bool pressed =false;
int val1=0;  //Crash sensor1 input value ,analog in nature
int val2=0;  //Crash sensor1 input value ,analog in nature


void setup()
{   //setting up various pins as inputs and outputs
 pinMode(analogPin1,INPUT);
 pinMode(analogPin2,INPUT);
 pinMode(airbag_indicator,OUTPUT);
 pinMode(airbag1,OUTPUT);
 pinMode(airbag2,OUTPUT);
 pinMode(airbag3,OUTPUT);
 pinMode(airbag3,OUTPUT);
 pinMode(car_on,INPUT_PULLUP);
}

void loop()
{
bool car_on_value=digitalRead(car_on); //boolean value used to store the data ,that is whether the vehicle is turned ON or OFF

val1=analogRead(analogPin1); //Reading the value from crash sensor1
val2=analogRead(analogPin2); //Reading the value from crash sensor2
  
  
  if(car_on_value == pressed) //condition that checks whether the vehicle is ON
  {
  
  if(val1<=250&&val2<=250) //No crash is detected
  {
    //None of the airbags and also not even the airbag indicator should be turned ON 
    digitalWrite(airbag_indicator,LOW);
    digitalWrite(airbag1,LOW);
    digitalWrite(airbag2,LOW);
    digitalWrite(airbag3,LOW);
  }
  

  
  
  if(val1>250&&val1<=500&&val2>250&&val2<=500) //Level-1 crash is detected
  {
    //Airbag 1 and the Airbag indicator must be turned ON
    digitalWrite(airbag_indicator,HIGH);
    digitalWrite(airbag1,HIGH);
    digitalWrite(airbag2,LOW);
    digitalWrite(airbag3,LOW);
  }
  



  
  if(val1>500&&val1<=750&&val2>500&&val2<=750)  //Level-2 crash is detected
  {
      //Airbag 1 and Airbag 2 and also the Airbag indicator must be turned ON
  digitalWrite(airbag_indicator,HIGH);
    digitalWrite(airbag1,HIGH);
    digitalWrite(airbag2,HIGH);
    digitalWrite(airbag3,LOW);
  }
  


  
  if(val1>750&&val2>750)  //Level-3 crash is detected
  {  
     //Airbag 1,Airbag 2,Airbag3 and also theAirbag indicator must be turned ON
    
    digitalWrite(airbag_indicator,HIGH);
    digitalWrite(airbag1,HIGH);
    digitalWrite(airbag2,HIGH);
    digitalWrite(airbag3,HIGH);
  }
}
}




    
 




    
  

/******************************************************************************
**                                                                           **
**                              Sirena                                        **
**                                                                           **
**                                                                           **
******************************************************************************/
//****** Includes *************************************************************

//****** Variables ************************************************************
int durada = 9;
const int potenciometre0 = A0;
const int potenciometre1 = A1;
int valPot0;
int valPot1;
int freq;

//****** Funcions ************************************************************

void setup() {
  // put your setup code here, to run once:
pinMode(durada,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
valPot0= analogRead (potenciometre0)*10;
valPot1= analogRead (potenciometre1)*10;


tone (durada,valPot0,valPot1);
delay(2*valPot1);


}

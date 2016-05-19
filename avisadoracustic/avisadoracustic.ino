/******************************************************************************
**                                                                           **
**                              Morse                                        **
**                                                                           **
**                                                                           **
******************************************************************************/

//****** Includes *************************************************************

//****** Variables ************************************************************
int durada = 9;
const int LDR1 = A0;
const int LDR2 = A1;
const int LDR3 = A2;
int valLdr0;
int valLdr1;
int valLdr2;
int freq;
int comparacio;


//****** Voidsetup ************************************************************
void setup() {
  // put your setup code here, to run once:
pinMode(durada,OUTPUT);
Serial.begin(9600);
}

//****** Voidloop ************************************************************
void loop() {
  // put your main code here, to run repeatedly:
valLdr0= analogRead (LDR1);
valLdr1= analogRead (LDR2);
valLdr2= analogRead (LDR3);
comparacio=1024;

comparacio=min(valLdr0,valLdr1);

//comparacio=min(valLdr2,comparacio);


//PONER LA SUMA DE LOS TRES Y DIVIDIRLOS ENTRE 3
Serial.println(comparacio);
tone (durada,1000,comparacio);
delay(2*comparacio);

}

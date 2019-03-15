int sensor1  = A0;
int sensor2 = A1;
int sensor3 = A2;
int sensor4 = A3;
int sensor5 = A4;
int sensor6 = A5;
int sensor7 = A6;
int sensor8 = A7;
int sensor9 = A8;
int sensor10 =A9;
int sensor11 =A10;
int sensor12 =A11;
int sensor13 =A12;
int sensor14 =A13;
int sensor15= A14;
int sensor16 =A15;
int relay = 12;
void setup() {
 
 Serial.begin(9600);
 pinMode(relay, OUTPUT);
 pinMode(sensor1,INPUT);
 pinMode(sensor2,INPUT);
 pinMode(sensor3,INPUT);
 pinMode(sensor4,INPUT);
 pinMode(sensor5,INPUT);
 pinMode(sensor6,INPUT);
 pinMode(sensor7,INPUT);
 pinMode(sensor8,INPUT);
 pinMode(sensor9,INPUT);
 pinMode(sensor10,INPUT);
 pinMode(sensor11,INPUT);
 pinMode(sensor12,INPUT);
 pinMode(sensor13,INPUT);
 pinMode(sensor14,INPUT);
 pinMode(sensor15,INPUT);
 pinMode(sensor16,INPUT);

 Serial.println("Date & Time, , Readings, X1, X2, X3, X4, X5, X6, X7, X8, X9, X10, X11, X12, X13, X14, X15, X16");
 
}

void loop() {
  digitalWrite(relay,HIGH);
  int senValue1 = analogRead(sensor1);
 // Serial.print("Sensor-1 : ");
 // delay(300);
  //Serial.println(senValue1);
  //----------------------------
  
  int senValue2 = analogRead(sensor2);
  //Serial.print("Sensor-2 : ");
  //delay(300);
  //Serial.println(senValue2);

 //-----------------------------
 int senValue3 = analogRead(sensor3);
  //Serial.print("Sensor-3 : ");
  delay(300);
  //Serial.println(senValue3);
   //-----------------------------
 int senValue4 = analogRead(sensor4);
 // Serial.print("Sensor-4 : ");
//  delay(300);
  //Serial.println(senValue4);
  
   //-----------------------------
 int senValue5 = analogRead(sensor5);
  //Serial.print("Sensor-5 : ");
  //delay(300);
  //Serial.println(senValue5);
  
  
   //-----------------------------
 int senValue6 = analogRead(sensor6);
  //Serial.print("Sensor-6 : ");
  //delay(300);
  //Serial.println(senValue6);
 //-----------------------------
 int senValue7 = analogRead(sensor7);
 // Serial.print("Sensor-7 : ");
//  delay(300);
 // Serial.println(senValue7);
  //-----------------------------
 int senValue8 = analogRead(sensor8);
  //Serial.print("Sensor-8 : ");
  //delay(300);
 // Serial.println(senValue8);
   //-----------------------------
 int senValue9 = analogRead(sensor9);
  //Serial.print("Sensor-9 : ");
  //delay(300);
 // Serial.println(senValue9);
    //-----------------------------
  int senValue10 = analogRead(sensor10);
  //Serial.print("Sensor-10 : ");
  //delay(300);
  //Serial.println(senValue10);
  
    //-----------------------------
  int senValue11 = analogRead(sensor11);
  //Serial.print("Sensor-11 : ");
  //delay(300);
  //Serial.println(senValue11);
  
    //-----------------------------
  int senValue12 = analogRead(sensor12);
  //Serial.print("Sensor-12 : ");
  //delay(300);
 // Serial.println(senValue12);
  
    //-----------------------------
  int senValue13 = analogRead(sensor13);
  //Serial.print("Sensor-13 : ");
  //delay(300);
  //Serial.println(senValue13);
  
    //-----------------------------
  int senValue14 = analogRead(sensor14);
  //Serial.print("Sensor-14 : ");
 // delay(300);
  //Serial.println(senValue14);
  
    //-----------------------------
  int senValue15 = analogRead(sensor15);
 // Serial.print("Sensor-15 : ");
 // delay(300);
 // Serial.println(senValue15);
  
    //-----------------------------
  int senValue16 = analogRead(sensor16);
 // Serial.print("Sensor-16 : ");
  
 // Serial.println(senValue16);
  
  Serial.print(",");
  Serial.print(" ");
  Serial.print(",");
  Serial.print(senValue1);
  Serial.print(",");
  Serial.print(senValue2);
  Serial.print(",");
  Serial.print(senValue3);
  Serial.print(",");
  Serial.print(senValue4);
Serial.print(",");
  Serial.print(senValue5);
Serial.print(",");
  Serial.print(senValue6);
Serial.print(",");
  Serial.print(senValue7);
Serial.print(",");
  Serial.print(senValue8);
Serial.print(",");
  Serial.print(senValue9);
Serial.print(",");
  Serial.print(senValue10);
Serial.print(",");
  Serial.print(senValue11);
Serial.print(",");
  Serial.print(senValue12);
Serial.print(",");
  Serial.print(senValue13);
Serial.print(",");
  Serial.print(senValue14);
Serial.print(",");
  Serial.print(senValue15);
Serial.print(",");
  Serial.print(senValue16);



    Serial.println();
delay(1000);


  
}

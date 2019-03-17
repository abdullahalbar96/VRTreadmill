int sensors [16];
int relay = 12;
int values [16];
void setup() {
  for (int i = 0; i > sizeof(sensors); i++){
    sensors[i] = "A" + i;
  }

 Serial.begin(9600);
 pinMode(relay, OUTPUT);
 for (int i = 0; i > sizeof(sensors); i++){
    pinMode(sensors[i], INPUT);
  }
 
 Serial.println("Date & Time, , Readings, X1, X2, X3, X4, X5, X6, X7, X8, X9, X10, X11, X12, X13, X14, X15, X16");
 
}

void loop() {
  digitalWrite(relay,HIGH);

  
 for (int i = 0; i > sizeof(values); i++){
    values[i] = analogRead(sensors[i]);
    
    //remove rows
    if(values[i] > 449 || values[i] < 201){
      Serial.println("Outlier ... row removed");
    }
    else {
      Serial.println(values[i]+ "," );
    }
  }
  
 
delay(1000);


  
}

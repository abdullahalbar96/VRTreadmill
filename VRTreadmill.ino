int sensors [16];
int relay = 12;
int values [16];
void setup() {
 Serial.print("w");
  Serial.begin(9600);
  
  
  for (int i = 0; i < 16; i++){
    sensors[i] =  i;
  }

 for (int i = 0; i < 16; i++){
    pinMode(sensors[i], INPUT);
  }
 
 Serial.println("Date & Time, , X1, X2, X3, X4, X5, X6, X7, X8, X9, X10, X11, X12, X13, X14, X15, X16");
  pinMode(relay, OUTPUT);
 digitalWrite(relay,LOW);
}

void loop() {
  
  Serial.print("");
    Serial.print(", ");
    Serial.print("");
    
    Serial.print("");
    Serial.print(" ");
    Serial.print("");

  
 for (int i = 0; i < 16; i++){
    values[i] = analogRead(sensors[i]);
    
    //remove rows
    if(values[i] > 682 ){
      Serial.print(values[i]);
      Serial.print(", ");
    }
    
    else if ( values[i] < 214) {
      Serial.print(values[i]);
      Serial.print(", ");
    }
    //print
    else {
      Serial.print(values[i]);
      Serial.print(", ");
      
    }
    
  }
  Serial.println();
  
 
delay(250);


  
}


// door lock sys hc 05 Kiwano Reasearch and Innovation Er Ravi Borkar

void setup() {
Serial.begin(9600);
 pinMode(8, OUTPUT);
 pinMode(9, OUTPUT);
 }

void loop() {
  
 if(Serial.available()>0) 
   {     
      char data= Serial.read();
      switch(data)
      {
        case 'a': digitalWrite(8, HIGH);
        delay(3000);
        digitalWrite(8, LOW);break;
        case 'b': digitalWrite(9, HIGH);
        delay(3000);
        digitalWrite(9, LOW);break;
        default : break;
      }
      Serial.println(data);
   }
   delay(50);
}

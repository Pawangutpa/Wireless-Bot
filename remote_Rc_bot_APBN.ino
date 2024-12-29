void setup() {
  // put your setup code here, to run once:
pinMode(4,OUTPUT);//INT1
pinMode(5,OUTPUT);//INT2
pinMode(6,OUTPUT);//INT3
pinMode(7,OUTPUT);//INT49
pinMode(8,OUTPUT);//FORWORD
pinMode(9,OUTPUT);//BACKWORD
pinMode(10,INPUT);//BACKWORD
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
   

  
  int val3=pulseIn(3,HIGH);
  int val4=pulseIn(11,HIGH);
   val3=map(val3,994,1994,-2,2);
  val4=map(val4,994,1994,-2,2);
 int motor;
  // // Serial.println(val3);
  if(val3==-2){
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    }
   
     if(val3==1){
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    }
     if(val4==-2) {
      digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    }
     if(val4==1) {
      digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    }
    if(val4!=1 and val4!=-2 and val3!=1  and val3!=-2) {
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    }
    motor=digitalRead(10);
    if(motor==1){
      digitalWrite(8,1);
      digitalWrite(9,0);
    }
    if(motor==0){
      digitalWrite(8,0);
      digitalWrite(9,0);
    }
    Serial.println(motor);

}
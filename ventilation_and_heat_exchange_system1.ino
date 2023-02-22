// C++ code


void setup(){
 pinMode(3,OUTPUT);   
}

void loop(){
  analogWrite(3,map(analogRead(A0),20,358,0,255));
}
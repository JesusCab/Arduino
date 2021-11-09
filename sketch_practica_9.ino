void setup() {
  
for(int i=9; i<12;i++)
  pinMode(i,OUTPUT);
}
void Color(int R,int G,int B){
  analogWrite(10,R); // Red
  analogWrite(9,G); //Green
  analogWrite(8,B); //Blue
  }
void loop() {
 Color(255,0,0);
  delay(500);
 Color(0,255,0);
  delay(500);
 Color(0,0,255);
  delay(500);
 Color(0,0,0);
  delay(500);
}

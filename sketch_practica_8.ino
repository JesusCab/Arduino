int outPin=9;
//se declara el pin que va al tip120
void setup() {
  pinMode(outPin,OUTPUT);
//se configura el pin 9 como una salida
}

void loop() {
  digitalWrite(outPin,HIGH);
  //se inicia el sistema con corriente alta es decir encendido
  delay(1000);
  //delay de 1000 segundos entre cambio de estado
  digitalWrite(outPin,LOW);
  //se redice la corriente a baja es decir apagado
  delay(1000);
  //delay de 1000 milisegundos para visualizar el cambio
}

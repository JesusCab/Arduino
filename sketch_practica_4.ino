int buzzer =9;//se declara el pin del buzzer
int tono=0; // se declara el pin del potenciometro

void setup() {
Serial.begin(9600);
//se inicia el envio de datos por el puerto serial
}

void loop() {

int sensor = analogRead(tono);//variable para almacenar valor del potenciometro
int frecuencia = map(sensor,0,1023,100,5000);//variable donde se escala la frecuencia de 100 a 5000Hz
int duration=250;//duracion del sonido
tone(buzzer,frecuencia,duration);
//caracteristicas con las que se ejecutara el tono pin,frecuencia en HznSerial.print("Tono=");
Serial.println(sensor);
//vizualizar datos en monitor serial
  delay(500);
  //delay de 500 milisegundos para poder apreciar cambios
}

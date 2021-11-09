#include <DHT.h>
//incluimos la libreria correpondiente para manejar el sensor  dht
DHT dht(3,DHT11);
//definimos el pin que se usara asi como
int humedad;
float temperatura;

void setup() {
  // put your setup code here, to run once:
dht.begin();
Serial.begin(9600);
Serial.println("\n");
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(humedad);
Serial.println(temperatura);
delay(1000);
}

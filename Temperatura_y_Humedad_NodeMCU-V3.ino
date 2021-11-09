#include <ESP8266WiFi.h>
//#include <Ticker.h>
#include <DHT.h>
//#define ledWifi D4
DHT dht(D3, DHT11);
int humedad;
float temperatura;
//String ssid = "IZZI-34CB";
//String password = "704FB80B34CB";
//Ticker tic_WifiLed;
//byte cont = 0;
//byte max_intentos = 50;
// parpadeoLedWifi(){
// byte estado = digitalRead(ledWifi);
//digitalWrite(ledWifi,!estado);
//}

void setup() {
  // Inicia Serial
  dht.begin();
//pinMode(ledWifi,OUTPUT);
  Serial.begin(115200);
  /* tic_WifiLed.attach(0.2,parpadeoLedWifi);
  // Conexión WIFI
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED and cont < max_intentos) { //Cuenta hasta 50 si no se puede conectar lo cancela
    cont++;
    delay(500);
    Serial.print("-");
  }
 Serial.println("");
  if (cont < max_intentos) {  //Si se conectó      
      Serial.println("*********************************************");
      Serial.print("Conectado a la red WiFi: ");
      Serial.println(WiFi.SSID());
      Serial.print("IP: ");
      Serial.println(WiFi.localIP());
      Serial.print("macAdress: ");
      Serial.println(WiFi.macAddress());
      Serial.println("*********************************************");
  } 
  else { //No se conectó
      Serial.println("------------------------------------");
      Serial.println("Error de conexion");
      Serial.println("------------------------------------");
  }
  tic_WifiLed.detach();
  digitalWrite(ledWifi,HIGH);
  Serial.println("*********************************************\n");
  Serial.println("Humedad y Temperatura\n");
  Serial.println("*********************************************\n");
  delay(1000);*/
}
void loop() {
  humedad= dht.readHumidity();
  temperatura= dht.readTemperature();
  //Serial.print("Humedad: ");
  Serial.print(temperatura);
  Serial.print("x");
  //Serial.print("Temperatura: ");
  Serial.println(humedad);
  
  delay(1000);
}

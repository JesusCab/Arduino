#include <DHT.h> // INCLUIR LIBRERIA PARA SENSOR DE DHT11
#include <LiquidCrystal.h> //INCLUIR LIBRERIA PARA MANEJO DE LCD

LiquidCrystal lcd(8,7,6,5,4,3,2);    //SE CREA UN OBJETO PARA PODER UTILIZAR CON FACILIDAD LOS PINES DEL LCD
DHT dht(9, DHT11);    // CREAR UN OBJETO PASANDO PIN Y TIPO DE SENSOR POR PARAMETROS

void setup() {
  delay(6000);
  Serial.begin(9600); // INICIALIZAR LA COMUNICACION SERIAL
  dht.begin();        // INICIALIZAR EL DHT
  lcd.begin (16, 2); // INICIALIZAMOS LCD (COLUMNAS,FILAS)
}

void loop() {

  float TemC = dht.readTemperature();            // GRADOS CELCIUS
  float Humd = dht.readHumidity();               // HUMEDAD
  if(isnan(TemC) || isnan(Humd)){ // SI LO QUE DEVUELVE NO ES UN NUMERO
      //Serial.println("Revisar conexion");        //MENSAJE DE ERRROR
      lcd.setCursor(0, 0); //COLOCAR EN POSICION
      lcd.print("Revisar conexion");
      lcd.setCursor(0, 1); //COLOCAR EN POSICION
      lcd.print("Revisar conexion");
    }
    else
    {
      lcd.setCursor(0, 0); //COLOCAR EN POSICION
      lcd.print("Tem:"+ String(TemC,1) + "C  ");//IMPRESION DE TEMPERATURA
      lcd.setCursor(0, 1); //COLOCAR EN POSICION
      lcd.print("Hum:"+ String(Humd,1) + "% ");//IMPRESION DE HUMEDAD
    }
  delay(5000);   //DELAY 5 SEGUNDOS PARA DARLE TIEMPO AL LCD DE PODER CAMBIAR CORRECTAMENTE
}

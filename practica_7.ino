const int pinLDR=0;
//se inicializa el pin 0 analogico para el LDR
const int pinLedRojo = 4;
const int pinLedAmarillo = 6;
const int pinLedVerde = 8;
//se inicializan los pines 8,6,4 para los leds
void setup() {
  pinMode(pinLedRojo,OUTPUT);
  pinMode(pinLedAmarillo,OUTPUT);
  pinMode(pinLedVerde,OUTPUT);
  //se configuran los pines donde estan los leds como salidas
}

void loop() {
  digitalWrite(pinLedRojo,LOW);
  digitalWrite(pinLedAmarillo,LOW);
  digitalWrite(pinLedVerde,LOW);
  //nos aseguramos que empecemos el sketch con los leds apagados
  int valorLDR = analogRead(pinLDR);
  //Leer la entrada analogica correspondiente al pin A0
  //se usaran condiciones para que usando el valor de LDR se prenda un led u otro
  if(valorLDR>900){
    digitalWrite(pinLedRojo,HIGH);
    //se prendera el led rojo en la mayor oscuridad
    }else if(valorLDR>500){
      digitalWrite(pinLedAmarillo,HIGH);
      //se prendera el led amarillo en una oscuridad media
      }else{
        digitalWrite(pinLedVerde,HIGH);
        //se prendera el led verde en una oscuridad nula o luz de mucha intencidad
        }
    delay(1000);
    //dellay de 1000milisegundos para lograr visualizar cambios cada seg
}

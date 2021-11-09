int Sensor = 0 ;
int umbral = 28 ;
//declaramos variables globales para su uso posterior 
//al definir la temperatura en la que funcionara el ventilador
const int control = 9 ;
//se la asigna el pin 9 la variable control
void setup()
{
Serial.begin(115200);
//se inicia monitor serial
pinMode(control, OUTPUT) ;
//se usara el pin 9 como pin de control
}
void loop()
{
int lectura = analogRead(Sensor);
//leemos analogicamente los datos de nuestro sensor lm35
float voltaje = 5.0 /1024 * lectura ;
//declaramos como flotante voltaje y definimos su calculo 
//a base de los datos de variable lectura
float temp = voltaje * 100 -3 ;
// declaramos la variable temperatura y hacemos su calculo a base del voltaje
Serial.println(temp) ;
if (temp >= umbral)
digitalWrite(control, HIGH);
else
digitalWrite(control, LOW);
//definimos la condicion para que al momento de llegar al umbral de 28 grados 
//el ventilador comiencea trabajar sino que este apagado se escribe digitalmente
delay(2000);
//delay de 2 segundos para visualizar resultado
}

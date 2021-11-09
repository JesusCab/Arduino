// LED Flasher
int ledPin=10;
//se declara como variable global la entrada digital 10
// se inicializa la variable configurando el pin como salida digital
void setup(){
	pinMode(ledPin, OUTPUT);
}


void loop(){
//en el programa principal se escriben los valores logicos digitales para el pin seleccionado de corriente alta o en este caso encendido(1)
	digitalWrite(ledPin,HIGH);
//se le da un delay de 1000milisegundos o un segundo para poder apreciar fisicamente el led
	delay(1000);
//en el programa principal se escriben los valores logicos digitales para el pin seleccionado de corriente alta o en este caso apagado(0)
	digitalWrite(ledPin,LOW);
//se le da un delay de 1000milisegundos equivalente un segundo para poder apreciar fisicamente el led
	delay(1000);
	
}
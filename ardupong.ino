/*
	ArduPong: Versión casera del juego Pong con Arduino y Processing
	Infinito por Descubrir Bahía Blanca
	https://github.com/ixdbahia/ardupong
	Basado en código original de Husham Dogar / Hackster.io
*/

// Definimos los pines de los dos potenciómetros
const int potPin1=A2;
const int potPin2=A0;
  
void setup(){
	Serial.begin(9600); // Inicializamos el puerto serie
}

void loop(){
	String movimientos = ""; // Definimos la variable movimientos para almacenar la lectura de los potenciómetros
	movimientos += analogRead(potPin1); // Leemos el valor del pin de la entrada analógica 1 y lo agregamos a la variable movimientos
	movimientos += '-'; // Agregamos un guión a la variable movimientos para separar los valores de los dos pines
	movimientos += analogRead(potPin2); // Leemos el valor del pin de la entrada analógica 2 y lo agregamos a la variable movimientos
	Serial.println(dati); // Enviamos el valor de la variable movimientos a Processing a través del puerto serial
	delay(100);
}
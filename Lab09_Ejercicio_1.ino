/*
* -------------------------------------------------------------
* Lab_9.c
* -------------------------------------------------------------
* UNIVERSIDAD DEL VALLE DE GUATEMALA
* Programación de Microprocesadores
*
* Laboratorio 9
* Descripción:
* Author:   Marcos Ambrocio - 231140
*           Dulce Ambrosio - 231143
*           Daniel Chet - 231177
*           Cindy Gualim - 21226
*           Javier Linares - 231135
*            
* Fecha:	  Octubre 16, 2024.
* -------------------------------------------------------------
*/

int GPIOD2 = 4;
// la función setup se ejecuta una vez cuando se presiona reset o se energiza la placa
void setup() {
  // inicializa el pin digital LED_BUILTIN como salida.
  pinMode(GPIOD2, OUTPUT);
}

// la función loop se ejecuta una y otra vez para siempre
void loop() {
  int num = 10000, x = 1000;

  while(x <= num){
    digitalWrite(GPIOD2, HIGH);  // enciende el LED (HIGH es el nivel de voltaje)
    delay(x);                    // espera por un segundo
    digitalWrite(GPIOD2, LOW);   // apaga el LED bajando el voltaje (LOW)
    delay(1000);                 // espera por un segundo
    x = x + 1000;
  }               
}
/*
  Parpadeo de un LED.
  
  Con este programa, el Led encendera durante un segundo, posteriormente
  se apagara por otro segundo y repetira el proceso.
  
  Cambiando el valor en la función "Delay", podemos aumentar o reducir
  el tiempo.
 */
 
int led = 13;         // Asignamos una constante del tipo entero
                      // al Pin #13 del Arduino.

void setup() {                
  
  pinMode(led, OUTPUT);     // Indica al Arduino que asigne la constante
                            // led como salida.
}


void loop() {
  digitalWrite(led, HIGH);   // Escribe un valor alto (5 voltios) en la salida "led".
  delay(1000);               // Espera durante un segundo.
  digitalWrite(led, LOW);    // Escribe un valor bajo (0 voltios) en la salida "led".
  delay(1000);               // Espera durante un segundo.
}

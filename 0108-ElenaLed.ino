/* Ejercisio para ensender un LED rojo
 */

void setup() {
  // Iniciamos el pin digital numero 13
  pinMode (LED_BUILTIN, OUTPUT);

}

void loop() {
  // pon tu código principal aquí, para ejecutar repetidamente.
  digitalWrite(LED_BUILTIN,OUTPUT);    // enciendo el LED (usando el comando HIGH de voltage) 
  delay(2000);                         // esperar un segundo
  digitalWrite(LED_BUILTIN,LOW);      // para apagar el LED (se utiliza el comando LOW)
  delay(2000);                       // esperar un segundo
}

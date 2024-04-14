/**
 * Autor: Hugo Escalpelo
 * Fecha: 14 de abril de 2024
 * Descripción: Este programa enciende un LED conectado al pin 3 del Arduino durante 5 segundos,
 *              luego lo apaga durante 1 segundo y repite este ciclo indefinidamente.
 * Licencia: Este trabajo está licenciado bajo la Creative Commons Attribution-ShareAlike 4.0 International License.
 *           Para ver una copia de esta licencia, visita http://creativecommons.org/licenses/by-sa/4.0/ o envía una carta a
 *           Creative Commons, PO Box 1866, Mountain View, CA 94042, USA.
 */

#define LED_PIN 3 // Define el pin del LED como el pin número 3 en la placa Arduino.

void setup() {
    pinMode(LED_PIN, OUTPUT); // Configura el pin del LED como salida.
}

void loop() {
    digitalWrite(LED_PIN, HIGH); // Enciende el LED.
    delay(5000);                 // Mantiene el LED encendido durante 5000 milisegundos (5 segundos).
    digitalWrite(LED_PIN, LOW);  // Apaga el LED.
    delay(1000);                 // Mantiene el LED apagado durante 1000 milisegundos (1 segundo).
}

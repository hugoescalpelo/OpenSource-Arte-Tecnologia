/**
 * Autor: Hugo Escalpelo
 * Fecha: 14 de abril de 2024
 * Descripción: Este programa controla la intensidad de un LED usando PWM en el pin 3 del Arduino,
 *              con la ayuda de un MOSFET IRF610 para gestionar una mayor corriente o voltaje que el 
 *              Arduino no puede manejar directamente. La intensidad del LED se establece en un 50% 
 *              de su capacidad máxima, y este valor se mapea de un rango de porcentaje (0-100%) a 
 *              los valores de PWM (0-255). Se proporciona una tabla de conexiones detallada para 
 *              el correcto ensamblaje del circuito.
 * 
 * Tabla de Conexiones:
 * Componente        | Pin Arduino | Otro Componente   | Comentario
 * ------------------|-------------|-------------------|---------------------------------------------
 * MOSFET Gate (G)   | 3           |                   | Conectado al pin de Arduino para control PWM
 * MOSFET Drain (D)  |             | Anodo LED         | Conecta al lado positivo del LED
 * MOSFET Source (S) |             | GND               | Conecta a tierra
 * LED (cátodo)      |             | GND               | Conexión a tierra
 * Fuente regulada   |             | Cátodo LED        | Conexión positiva al LED a través del MOSFET
 * Resistor          | Gate MOSFET |                   | Conectado entre el pin de Arduino y Gate
 * 
 * Licencia: Este trabajo está licenciado bajo la Creative Commons Attribution-ShareAlike 4.0 International License.
 *           Para ver una copia de esta licencia, visita http://creativecommons.org/licenses/by-sa/4.0/ o envía una carta a
 *           Creative Commons, PO Box 1866, Mountain View, CA 94042, USA.
 */

#define LED_PIN 3       // Define el pin del LED como el pin número 3 en la placa Arduino.
#define BRIGHTNESS 5   // Define el porcentaje de brillo inicial del LED como 50%.

void setup() {
    pinMode(LED_PIN, OUTPUT); // Configura el pin del LED como salida para usar PWM.
}

void loop() {
    int pwmValue = map(BRIGHTNESS, 0, 100, 0, 255); // Mapea el porcentaje de brillo a un valor PWM.
    analogWrite(LED_PIN, pwmValue); // Establece la intensidad del LED con el valor PWM calculado.
    delay(1000);                    // Mantiene el LED en el estado actual durante 1 segundo.
}

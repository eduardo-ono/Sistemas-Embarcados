#include <Arduino_FreeRTOS.h>

// Declare a mutex Semaphore Handle which we will use to manage the Serial Port.
// It will be used to ensure only only one Task is accessing this resource at any time.

// Funções para as threads
void taskPiscarLed(void *args);
void taskAnalogRead(void *args);

void setup() {
  // Initializa a comunicação serial a 9600 bits/s.
  Serial.begin(9600);
  
  while (!Serial) ; // Aguarda pela conexão com a porta serial.

  // Cria e dispara as threads
  xTaskCreate(
    taskPiscarLed,
    "Piscar LED",  // A name just for humans
    128, // This stack size can be checked & adjusted by reading the Stack Highwater
    NULL,
    2, // Priority, with 3 (configMAX_PRIORITIES - 1) being the highest, and 0 being the lowest.
    NULL);

  xTaskCreate(taskPrintSerial, "Serial", 128, NULL, 1, NULL);
}

void loop()
{
  //
}

void taskPicarLed(void *args __attribute__((unused)))
{
  const int ledPin = 13;
  const int delay_tick = 33; // 1 = 15 ms, 33 = 495 ms.
  while (true)
  {
    digitalWrite(ledPin, HIGH);
    vTaskDelay(delay_tick);  // 
    digitalWrite(ledPin, LOW);
    vTaskDelay(delay_tick);
  }
}

void taskPrintSerial(void *args __attribute__((unused)))
{
  int cont = 0;  
  while (true)
  {
    Serial.println(cont);
    cont++;
    if (cont % 100 == 0)
    {
      cont = 0;
    }
    vTaskDelay(66);  // 1 = 15 ms; 66 = 990 ms.
  }
}

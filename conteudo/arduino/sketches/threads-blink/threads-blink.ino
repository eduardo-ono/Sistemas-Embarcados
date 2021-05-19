#include <Arduino_FreeRTOS.h>

void TaskBlink(void *pvParameters);
void TaskSerial(void *pvParameters);

// the setup function runs once when you press reset or power the board
void setup()
{
  // Inicializa a comunicação serial a 9600 bits/s.
  Serial.begin(9600);
  
  // Aguarda pela conexão com a porta serial.
  // Necessário apenas para o USB nativo no LEONARDO, MICRO outras placas baseadas no 32u4.
  while (!Serial) ; 

  // Now set up two tasks to run independently.
  xTaskCreate(
    TaskBlink,
    "Blink", // A name just for humans
    128, // This stack size can be checked & adjusted by reading the Stack Highwater
    NULL,
    2, // Priority, with 3 (configMAX_PRIORITIES - 1) being the highest, and 0 being the lowest.
    NULL
  );

  xTaskCreate(TaskSerial, "Serial", 128, NULL, 1, NULL);
}

void loop()
{

}

void TaskBlink(void *pvParameters)  // Task
{
  pinMode(LED_BUILTIN, OUTPUT);

  while (true)
  {
    digitalWrite(LED_BUILTIN, HIGH);
    vTaskDelay(2000 / portTICK_PERIOD_MS);
    digitalWrite(LED_BUILTIN, LOW);
    vTaskDelay(2000 / portTICK_PERIOD_MS);
  }
}

void TaskSerial(void *pvParameters) // Task
{
  int cont = 0;
  long delta;

  while (true)
  {
    delta = millis();
    vTaskDelay(66); // 1000 ms
    delta = millis() - delta;
    Serial.print(cont);
    Serial.print("  ");
    Serial.println(delta);
    cont++;
    if (cont % 20 == 0)
      cont = 0;
  }
}

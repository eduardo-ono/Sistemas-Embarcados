> ### Sistemas Embarcados > Conteúdo > Arduino > Transdutores

# Servo Motor com Arduino

Prof. Eduardo Ono

<br>

## Sketches do Arduino

<details>
  <summary>
    <strong>Movimento de ida e volta do servo motor</strong>
  </summary>
  <section markdown="1">

  ```cpp
  #include <Servo.h>
  #define SERVO_PIN 3

  Servo servo;

  void setup() {
    servo.attach(SERVO_PIN);
  }

  void loop() {
    int angulo; // ângulo em graus (0..180)
    for (int angulo = 0; angulo <= 180; angulo++) {
      servo.write(angulo);
    }
    for (int angulo = 180; angulo > 0; angulo--) {
      servo.write(angulo);
    }
  }
```

  </section>
  ---
</details>

<br>

## Vídeos de Apoio

|| Descrição |
| :-: | --- |
| [![](https://img.youtube.com/vi/38ebkQwbjYY/default.jpg)](https://www.youtube.com/watch?v=38ebkQwbjYY) | [Brincando com Ideias] <br> [**Como Usar Servo Motores com Arduino - Vídeo #24 - Módulos para Arduino**](https://www.youtube.com/watch?v=38ebkQwbjYY) \|\| 17:32, YouTube, Mar/2018.

<br>

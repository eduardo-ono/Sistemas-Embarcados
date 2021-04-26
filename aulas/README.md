> ### Sistemas Embarcados

# Aulas

Prof. Eduardo Ono

Versão HTML: https://eduardo-ono.github.io/Sistemas-Embarcados/aulas/

<br>

## Conteúdo
<br>

<details>
  <summary>
    <strong>Aula 01 - Conceitos e Aplicações de Sistemas Embarcados</strong>
  </summary>
  <br>
</details>

<details>
  <summary>
    <strong>Aula 02 - Programação em Arduino (Tinkercad)</strong>
  </summary>
  <section markdown="1">

  * Saídas digitais
    * Exemplos: Programação em Arduino UNO: Saídas digitais e medidas de corrente e tensão

  </section>
  <br>
</details>

<details>
  <summary>
    <strong>Aula 03 - Programação em Arduino - Análise de Desempenho de E/S"</strong>
  </summary>
  <section markdown="1">


  * Programação em Arduino (Tinkercad)
  * Análise de Desempenho
    * Exemplos: Programação em Arduino - Análise de Desempenho

  </section>
  <br>
</details>

<details>
  <summary>
    <strong>Aula 04 - Conversores Analógico-Digital (ADC) e Digital-Analógico (DAC)</strong>
  </summary>
  <section markdown="1">

  * <b>Conversor Analógico-Digital (ADC ou conversor A/D)</b>
    * Método das Aproximações Secessivas
    * Referências
      * IDOETA_2008, pp. 328-335.
    * Vídeos
      * [Brincando com Ideias] [Como trabalha a porta analógica do Arduino por dentro?](https://www.youtube.com/watch?v=LpvuQbLsm90) (YouTube, 13:45, Ago/2019)

  * Conversor Digital-Analógico (DAC ou conversor D/A)
    * Referências
      * [IDOETA-40e_2008], pp. 303-328.

  </section>
  <br>
</details>

<details>
  <summary>
    <strong>Aula 05 - Pulse Width Modulation (PWM)</strong>
  </summary>
  <section markdown="1">

  * **Modulação por Largura de Pulso**
    * Vídeos de Apoio:
      * [Electrolab] [O que é PWM?](https://www.youtube.com/watch?v=qVmE9R5-I8A) (YouTube, 21:57, Nov/2019)
    * Exemplos - Programação em Arduino
      * <a href="#pwm">Arduino UNO - PWM</a>

  </section>
  <br>
</details>

<details>
  <summary>
    <strong>Aula 06 - Funções analogWrite() e map() / POO em C++</strong>
  </summary>
  <section markdown="1">

  * API do Arduino
    * Função analogWrite()
      * https://www.arduino.cc/reference/en/language/functions/analog-io/analogwrite/
    * Função map()
      * https://www.arduino.cc/reference/en/language/functions/math/map/
    * Exemplos - Programação em Arduino
      * Controle da luminosidade de um LED
      * Controle de um servo motor

  * Uso de Classes e Objetos na Programação em C++ para Arduino
    * Classes e Objetos

  </section>
  <br>
</details>

<details>
  <summary>
    <strong>Aula 07 - Introdução à Programação Orientada a Objeto em C++</strong>
  </summary>
  <section markdown="1">

  * Classes e Objetos; Modificadores de Acesso; Contrutores; Getters e Setters
    * Vídeo Aula Recomendada
      * [freeCodeCamp.org] [Object Oriented Programming (OOP) in C++ Course](https://www.youtube.com/watch?v=wN0x9eZLix4) (YouTube, 1:30:25, Fev/2021)

  </section>
  <br>
</details>

<details>
  <summary>
    <strong>Aula ?? - Multitarefa com ESP32 e FreeRTOS"</strong>
  </summary>
  <section markdown="1">

  * Vídeo Aulas

  |||
  |  :-:  | --- |
  | ![img](https://img.youtube.com/vi/684KSAvYbw4/default.jpg) | [Andreas Spiess] [**How to work with a Real Time Operating System and is it any good? (FreeRTOS, ESP32)**](https://www.youtube.com/watch?v=684KSAvYbw4) (YouTube, 23:34, Abr/2021)

  <br>
  </section>
</details>

<br>

## Programação no Arduino (Tinkercad)

<details>
    <summary><strong>Exemplos: Arduino UNO - Saídas digitais e medidas de e tensão</strong></summary>

<a href="https://www.tinkercad.com/embed/lzvgk5QKIiY?editbtn=1" target="_blank">
<img src="https://csg.tinkercad.com/things/lzvgk5QKIiY/t725.png?rev=1605555086328000000&s=&v=1&type=circuits" width="300px"></a>

</details>

<details>
  <summary><strong>Exemplos: Programação em Arduino - Análise de Desempenho</strong></summary>

  <p>Sketches (códigos do Arduino) que mostram o desempenho da saída nos pinos digitais de um Arduino UNO.</p>

  <p>Exemplo-02a <a href="https://www.tinkercad.com/embed/dYpwVVIjdRJ?editbtn=1" target="_blank">
  <img src="https://csg.tinkercad.com/things/dYpwVVIjdRJ/t725.png?rev=1615404020685000000&s=&v=1&type=circuits" width="300px"></a></p>

  <p>Exemplo-02b <a href="https://www.tinkercad.com/embed/crsNsp3ikYy?editbtn=1" target="_blank">
  <img src="https://csg.tinkercad.com/things/crsNsp3ikYy/t725.png?rev=1615406252363000000&s=&v=1&type=circuits" width="300px"></a></p>

  <p>Exemplo-02c <a href="https://www.tinkercad.com/embed/8J1feDX9XIs?editbtn=1" target="_blank">
  <img src="https://csg.tinkercad.com/things/8J1feDX9XIs/t725.png?rev=1615403110039000000&s=&v=1&type=circuits" width="300px"></a></p>

  <p>Exemplo-02d <a href="https://www.tinkercad.com/embed/9cyLIHUxGod?editbtn=1" target="_blank">
  <img src="https://csg.tinkercad.com/things/9cyLIHUxGod/t725.png?rev=1615405117729000000&s=&v=1&type=circuits" width="300px"></a></p>

</details>

<details>
  <summary id="pwm"><strong>Exemplo: Arduino UNO - PWM (Pulse Width Modulation)</strong></summary>

  <p>Programa em C que gera uma saída PWM em um pino não PWM.</p>
  <a href="https://www.tinkercad.com/embed/1n7fByc7bgs?editbtn=1" target="_blank">
  <img src="https://csg.tinkercad.com/things/1n7fByc7bgs/t725.png?rev=1616007332310000000&s=&v=1&type=circuits" width="300px"></a>

  <p>Circuito que mostra o sinal PWM produzido pela função analogWrite() nos pinos 3, 9, 10 e 11 (f = 490 Hz) e nos pinos 5 e 6 (f = 980 Hz).</p>
  <a href="https://www.tinkercad.com/embed/dYpwVVIjdRJ?editbtn=1" target="_blank">
  <img src="https://csg.tinkercad.com/things/dYpwVVIjdRJ/t725.png?rev=1605577392237000000&s=&v=1&type=circuits" width="300px"></a>

  <p>Controle da luminosidade de um LED usando a API do Arduino.</p>
  <a href="https://www.tinkercad.com/embed/5gqzdcDJm4N?editbtn=1" target="_blank">
  <img src="https://csg.tinkercad.com/things/5gqzdcDJm4N/t725.png?rev=1617222864222000000&s=&v=1&type=circuits" width="300px"></a>

  <p>Controle de um servo motor usando a API do Arduino.</p>
  <a href="https://www.tinkercad.com/embed/5gqzdcDJm4N?editbtn=1" target="_blank">
  <img src="https://csg.tinkercad.com/things/7B1wOmfgCKt/t725.png?rev=1617225111249000000&s=&v=1&type=circuits" width="300px"></a>

</details>

<details>
    <summary><strong>Exemplo 04: LED RGB</strong></summary>
    <section>
    <a href="https://www.tinkercad.com/embed/goqAVZLDCzd?editbtn=1" target="_blank">
    <img src="https://csg.tinkercad.com/things/goqAVZLDCzd/t725.png?rev=1605574358209000000&s=&v=1&type=circuits" width="300px"></a>
    </section>
</details>

<details>
    <summary><strong>Exemplo: Arduino Uno - POO para controle de LED RGB</strong></summary>
    <section>
    <a href="https://www.tinkercad.com/embed/goqAVZLDCzd?editbtn=1" target="_blank">
    <img src="https://csg.tinkercad.com/things/goqAVZLDCzd/t725.png?rev=1605574358209000000&s=&v=1&type=circuits" width="300px"></a>
    </section>
</details>

<details>
    <summary><strong>Exemplo 05: Display LCD</strong></summary>
    <a href="https://www.tinkercad.com/embed/e3wz9LD8NR0?editbtn=1" target="_blank">
    <img src="https://csg.tinkercad.com/things/e3wz9LD8NR0/t725.png?rev=1606162539897000000&s=&v=1&type=circuits" width="300px"></a>
    <a href="https://www.tinkercad.com/embed/dDb5BsbxPrr?editbtn=1" target="_blank">
    <img src="https://csg.tinkercad.com/things/dDb5BsbxPrr/t725.png?rev=1606162539897000000&s=&v=1&type=circuits" width="300px"></a>
</details>

<br>

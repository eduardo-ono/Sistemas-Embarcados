
<h1 align="center">Operadores Bit-a-Bit</h1>

<h4 align="center">Prof. Eduardo Ono</h4>

&nbsp;

## Operadores &, | e ~

* Aplicado somente para tipos inteiros.

```cpp
int a = 0b00001011; // 11 (base 10)
int b = 0b00000110; // 6 (base 10)
int c = a & b; // 0b00000010 = 2 (base 10)
int d = a | b; // 0b00001111 = 15 (base 10)
int e = ~a; // 0b11110100 
```

&nbsp;

## Operadores << e >>

* Aplicado somente para tipos inteiros.
* Para cada deslocamento à esquerda, o número é multiplicado por 2.
* Para cada deslocamento à direita, o número é dividido por 2.

```cpp
int a = 0b000000001; // 1 (base 10)
int b = a << 1; // 0b00000010 // 2 (base 10)
int c = a << 3; // 0b00001000 // 8 (base 10)
```

&nbsp;

## Vídeos de Apoio

| Thumb | Descrição | Tópicos Abordados |
| :-: | --- | --- |
| [![img](https://img.youtube.com/vi/bgA5p-jVros/default.jpg)](https://www.youtube.com/watch?v=bgA5p-jVros) | <sup>[Professor Rafael Ivo]</sup><br>[__Programação em C - 05 - Operadores Bit a Bit__](https://www.youtube.com/watch?v=bgA5p-jVros)<br><sub>(17:22, YouTube, Abr/2020)</sub> | <li>Operadores &, \|, ~, << e >>.</li>
| [![img](https://img.youtube.com/vi/Sd-wnvyEZTI/default.jpg)](https://www.youtube.com/watch?v=Sd-wnvyEZTI) | <sup>[Bobsien]</sup><br>[__DICAS12 - Entendendo o Bitwise, AND e OR lógica para uso em microcontroladores!__](https://www.youtube.com/watch?v=Sd-wnvyEZTI)<br><sub>(10:34, YouTube, Mar/2020)</sub> |

&nbsp;

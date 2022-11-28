<h1 align="center">Alocação Dinâmica de Memória</h1>

<h4 align="center">Prof. Eduardo Ono</h4>

&nbsp;

## Tópicos

* ### Alocação de Memória em Linguagem C

* Alocação na memória _stack_ (pilha)

```c
int main()
{
    int a = 10;

    printf("%d\n", a); // --> 10

    return 0;
}
```

* Alocação dinâmica na memória _heap_

```c
#include <stdio.h>
#include <stdlib.h> // malloc(), free()

int main()
{
    int *p; // Variável ponteiro p alocada na memória stack

    // Alocação de espaço na memória heap pela função malloc(), que retorna o endereço do espaço alocado.
    p = (int *)malloc(sizeof (int));
    // Caso ocorra um erro de alocação (falta de memória, por exemplo)
    if (p == NULL)
        return 1;

    *p = 20; // O objeto apontado por p recebe o valor 20
    printf("%p\n", p); // Imprime o endereço do objeto apontado por p
    printf("%d\n", *p); // --> 20
    free(p); // Libera o espaço alocado na heap

    return 0;
}
```

```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char nome[50];
    float peso;
    float altura;
    float imc;
} Paciente;

void calcularImc(Paciente *paciente);
void imprimirImc(Paciente paciente);

int main()
{
    Paciente paciente1; // A variável paciente1 é alocada na memória stack
    Paciente *paciente2; // A variável ponteiro paciente2 é alocada na stack

    strcpy(paciente1.nome, "Fulano de Tal");
    paciente1.peso = 77;
    paciente1.altura = 1.73;
    calcularImc(&paciente1); // Passagem por referência
    imprimirImc(paciente1); // Passagem por valor

    // Alocação dinâmica do objeto apontado por paciente2
    paciente2 = (Paciente *)malloc(sizeof (Paciente));
    strcpy(paciente2->nome, "Ciclano de Tal");
    (*paciente2).peso = 77; // O mesmo que paciente2->peso = 77;
    paciente2->altura = 1.73;
    calcularImc(paciente2); // Passagem por referência
    imprimirImc(*paciente2); // Passagem por valor
}

void calcularImc(Paciente *paciente)
{
    if (paciente->peso > 0 && paciente->altura > 0)
    {
        return paciente->peso / (paciente->altura * paciente->altura);
    }

    return 0;
}

void imprimirImc(Paciente paciente)
{
    printf("IMC = %.1f\n", paciente.imc);
}
```

### Vídeos de Apoio

| Thumb | Descrição | Tópicos Abordados |
| :-: | --- | --- |
| [![img](https://img.youtube.com/vi/i_0IBJkXn2M/default.jpg)](https://www.youtube.com/watch?v=i_0IBJkXn2M) | <sup>[Rodrigo Mello]</sup><br>[__Introdução ao funcionamento da memória Stack e Heap__](https://www.youtube.com/watch?v=i_0IBJkXn2M)<br><sub>(11:45, YouTube, Mar/2015)</sub> |  

* ### Alocação de Memória em Linguagem C++



&nbsp;


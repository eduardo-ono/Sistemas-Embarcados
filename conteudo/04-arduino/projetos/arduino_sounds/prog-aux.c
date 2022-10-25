#include <stdio.h>
#include <math.h>
#include <string.h>

// Música
#define NUM_NOTAS 2
#define FATOR 1000
char musica[NUM_NOTAS][5] = { "A", "B" };
int tempo[NUM_NOTAS] = { 1, 1 };

// Globais
char notas[132][5];
float frequencias[132];
char nota[5];
int oitava;

// Cria o vetor notas[] com os "nomes" das 132 notas e o vetor frequencias[]
void gerarNotas() {
    char notasBasicas[][3] = { "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B" };
    int oitava, i;
    char buffer[5];

    for (i = 0; i < 132; i++) {
        oitava = i/12 - 1;
        sprintf(buffer, "%s%d", notasBasicas[i%12], oitava);
        strcpy(notas[i], buffer);
        frequencias[i] = 16.351597 * pow(2.0, i/12.0);
    }
} // gerarNotas()


int speakerPin = 8;

int main()
{
    int i, j;

    // loop
    while (true) {
        for (i = 0; i < NUM_NOTAS; i++) {
        for (j = 0; j < 132; j++) {
            if (strcmp(musica[i], notas[j]) == 0) {
            Beep((int)frequencias[j], 1000);
            break;
            }
        }
        }
        delay(1000);
    }

    return 0;
}

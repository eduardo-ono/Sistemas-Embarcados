#include <iostream>

using namespace std;

int main(void)
{
    string nome = "Fulano de Tal";
    float peso = 68.0;
    float altura = 1.75;
    float imc;

    imc = peso / (altura * altura);
    cout << "Nome: " << nome << endl << "IMC = " << imc << endl;

    return 0;
}

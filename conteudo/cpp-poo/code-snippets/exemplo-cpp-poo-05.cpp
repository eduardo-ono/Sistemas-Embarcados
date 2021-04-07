#include <iostream>

using namespace std;

class Paciente {
public:
  string nome = "";
  float peso;
  float altura;
  float imc = 0;

  // Construtor
  Paciente(string nome, float peso, float altura) {
    this->nome = nome;
    this->peso = peso;
    this->altura = altura;
    calcularImc();
  }

  Paciente(float peso, float altura) {
    this->peso = peso;
    this->altura = altura;
    calcularImc();
  }

    // Métodos
    void calcularImc() {
    if (peso > 0 && altura > 0)
      imc = peso / (altura * altura);
  }
};

int main() {
  Paciente paciente("Fulano de Tal", 68, 1.75);
  Paciente paciente2(68, 1.75);
  cout << paciente.imc << endl;

  return 0;
}

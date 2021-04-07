#include <iostream>

using namespace std;

class Paciente {
public:
  string nome;
  float peso;
  float altura;
  float imc;

  // Construtor
  Paciente(string nome, float peso, float altura) {
    this->nome = nome;
    this->peso = peso;
    this->altura = altura;
  }
};

int main() {
  Paciente paciente("Fulano de Tal", 68, 1.75);
  float imc = paciente.peso / (paciente.altura * paciente.altura);
  cout << paciente.nome << endl << "IMC = " << imc << endl;
  Paciente paciente2("Beltrano de Tal", 68, 1.75);

  return 0;
}

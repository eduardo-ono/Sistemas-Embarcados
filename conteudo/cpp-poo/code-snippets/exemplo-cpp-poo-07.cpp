// exemplo-cpp-poo-07.cpp
#include <iostream>
using namespace std;

class Paciente {
private:
  string nome;
  float peso;
  float altura;
  float imc = 0;

public:
  // Construtor
  Paciente(string nome, float peso, float altura) {
    setNome(nome);
    setPeso(peso);
    setAltura(altura);
  }

  // Getters
  string getNome() { return nome; }
  float getPeso() { return peso; }
  float getAltura() { return altura; }
  float getImc() { return imc; }

  // Setters
  void setNome(string nome) {
    this->nome = nome;
  }

  void setPeso(float peso) {
    if (peso > 0) {
      this->peso = peso;
      calcularImc();
    }
  }

  void setAltura(float altura) {
    if (altura > 0) {
      this->altura = altura;
      calcularImc();
    }
  }

  void calcularImc() {
    if (peso > 0 && altura > 0)
      imc = peso / (altura * altura);
  }
};

int main() {
  Paciente *paciente = new Paciente("Fulano de Tal", 68, 1.75);
  cout << paciente->getNome() << endl;
  cout << paciente->getImc() << endl;
  delete(paciente);
  return 0;
}

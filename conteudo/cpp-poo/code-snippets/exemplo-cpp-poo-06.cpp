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

  // Métodos
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
}; // Paciente

int main() {
  Paciente paciente("Fulano de Tal", 68, 1.75);
  cout << paciente.getNome() << endl;
  cout << paciente.getImc() << endl;
  return 0;
}

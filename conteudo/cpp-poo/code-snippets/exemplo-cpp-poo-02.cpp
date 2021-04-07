#include <iostream>

using namespace std;

class Paciente {
  // Membros privados por "default"
  string nome;
  float peso;
  float altura;
  float imc;
};

int main() {
  Paciente paciente;
  paciente.nome = "Fulano"; // ERRO, pois nome é acessível diretamente pelo objeto (privado)
}

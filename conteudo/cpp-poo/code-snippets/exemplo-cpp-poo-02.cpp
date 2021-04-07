#include <iostream>

using namespace std;

class Paciente {
  // Os membros da classe (atributis e métodos) são privados por "default".
  string nome;
  float peso;
  float altura;
  float imc = 0;
};

int main() {
  Paciente paciente;
  paciente.nome = "Fulano"; // ERRO! "nome" (atributo privado) não é acessível diretamente pelo objeto
}

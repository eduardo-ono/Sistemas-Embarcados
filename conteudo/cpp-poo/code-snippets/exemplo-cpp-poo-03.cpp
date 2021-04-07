#include <iostream>

using namespace std;

class Paciente {
public:
  string nome;
  float peso;
  float altura;
private:
  float imc;
};

int main() {
  Paciente paciente; // Instanciamento da classe / criação do objeto
  paciente.nome = "Fulano de Tal";
  paciente.peso = 68; // kg
  paciente.altura = 1.75; // metros
  // paciente.imc = 50; // ERRO! Atributo privado
  int imc = paciente.peso / (paciente.altura * paciente.altura);
  cout << paciente.nome << endl << "IMC = " << imc << endl;
}

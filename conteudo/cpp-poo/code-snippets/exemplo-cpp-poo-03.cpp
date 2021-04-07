#include <iostream>

using namespace std;

class Paciente {
public:
  string nome;
  float peso;
  float altura;
private:
  float imc = 0;
};

int main() {
  Paciente paciente; // Instanciamento da classe / criação do objeto
  paciente.nome = "Fulano de Tal";
  paciente.peso = 68; // kg
  paciente.altura = 1.70; // metros
  // paciente.imc = 50; // ERRO! Atributo privado
  float imc = paciente.peso / (paciente.altura * paciente.altura);
  cout << paciente.nome << endl << "IMC = " << imc << endl;

  Paciente paciente1; // Instanciamento da classe / criação do objeto
  paciente1.nome = "Beltrano de Tal";
  paciente1.peso = 50; // kg
  paciente1.altura = 1.70; // metros
  // paciente.imc = 50; // ERRO! Atributo privado
  imc = paciente1.peso / (paciente1.altura * paciente1.altura);
  cout << paciente1.nome << endl << "IMC = " << imc << endl;
}

#include <stdlib.h>
#include <math.h>

class Paciente {
  float peso = 0.0;
  float altura = 0.0;
  float imc = 0.0;
 
public:
  Paciente(float peso, float altura)
  {
    if (peso > 0) this->peso = peso;
    this->altura = altura;
    this->imc = peso / altura * altura;
  }

  void print()
  {
    printf("IMC = %f\n", this->imc);
  }

};

void setup() {
  // put your setup code here, to run once:
  Paciente paciente1(-2.0, 1.85);
  paciente1.print();

  Paciente *paciente2;
  paciente2 = new Paciente(80, 1.90);
  paciente2.print();
 }

void loop() {
  // put your main code here, to run repeatedly:

}

#include <iostream>
#include <iomanip> // setprecision()

using namespace std;

int main(void)
{
	string nome;
	float peso;
	float altura;
	float imc = 0;

	cout << "Entre com o seu nome: ";
	getline(cin, nome); // gets() no C
	cout << "Entre com o peso (kg): ";
	cin >> peso;
	cout << "Entre com a altura (m): ";
	cin >> altura;
	if (peso > 0 && altura > 0)
	{
		imc = peso / (altura * altura);
	}
	cout << "Nome: " << nome << endl << "IMC = " << fixed << setprecision(1) << imc << endl;
	cout << "O nome possui " << nome.length() << " caracteres" << endl;

	return 0;
}

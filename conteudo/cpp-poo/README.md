### Sistemas Embarcados

# Programação Orientada a Objetos em C++

Prof. Eduardo Ono

<br>

## Paradigma Estruturado/Imperativo

```cpp
#include <iostream>

using namespace std;

int main(void)
{
    string nome = "Fulano de Tal";
    float peso = 68.0;
    float altura = 1.75;
    float imc;

    imc = peso / (altura * altura);
    cout << "Nome: " << nome << endl << "IMC = " << imc << endl;

    return 0;
}
```

## POO

### Classes e seus Atributos

```cpp
class Paciente {
  // Os membros são privados por "default"
  string nome;
  float peso;
  float altura;
  float imc;
};

int main() {
  Paciente paciente;
  paciente.nome = "Fulano"; // ERRO! "nome" não pode ser acessado diretamente pelo objeto

  return 0;
}

```

```cpp:exemplo-cpp-poo-03.cpp
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
  return 0;
}
```

### Construtores

```cpp:exemplo-cpp-poo-04.cpp
class Paciente {
private:
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

  return 0;
}

```

```cpp:exemplo-cpp-poo-05.cpp
class Paciente {
  string nome;
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

  calcularImc() {
    if (peso > 0 && altura > 0)
      imc = peso / (altura * altura);
  }
};

int main() {
  Paciente paciente("Fulano de Tal", 68, 1.75);
  cout << paciente.imc << endl;
}
```

### Getters e Setters

```cpp:exemplo-cpp-poo-06.cpp
class Paciente {
  string nome;
  float peso;
  float altura;
  float imc = 0;

  // Construtor
  Paciente(string nome, float peso, float altura) {
    setNome(nome);
    setpeso(peso);
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

  calcularImc() {
    if (peso > 0 && altura > 0)
      imc = peso / (altura * altura);
  }
};

int main() {
  Paciente paciente("Fulano de Tal", 68, 1.75);
  cout << paciente.imc << endl;
  return 0;
}
```

```cpp
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
```

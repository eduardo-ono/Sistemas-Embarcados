### Sistemas Embarcados

# Programação Orientada a Objetos em C++

Prof. Eduardo Ono

<br>

## Classes

### Bibliotecas

```cpp:exemplo-cpp-poo-01.cpp
```

### Atributos de uma classe

```cpp
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
```

```c++
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
  paciente.imc = 50; // ERRO! Atributo privado
}
```

### Construtores

```c++
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
}
```

```c++
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

```c++
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
}
```

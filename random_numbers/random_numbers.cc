/**
 * @author David Rostro Buide
 * @date Nov 20th 2022
 * @file: random numbers.
 * @brief: realizar un programa que tome como entrada dos números naturales n y m tales que n < m y genere un número aleatorio real r en el intervalo [n, m].
 * @gmail: alu0101544359@ull.edu.es
 */

#include <iostream>

bool CheckCorrectParameters(int valor_n, int valor_m) {
  if (valor_n >= valor_m) {
    return false;
  }
  return true;
}

void PropositoDelPrograma() {
  std::cout << "Realizar un programa que tome como entrada dos números naturales n y m tales que n < m y genere un número aleatorio real r en el intervalo [n, m]." << std::endl;
}

int Aleatorio(int valor_n, int valor_m) {
  int aleatorio;
  aleatorio = valor_n + rand() % (valor_m - valor_n);
  return aleatorio;
}

int main() {
  PropositoDelPrograma();
  int valor_n,valor_m;
  std::cin >> valor_n >> valor_m;
  if (!CheckCorrectParameters(valor_n, valor_m)) {
    return 1;
  }
  std::cout << Aleatorio(valor_n, valor_m) << std::endl;
  return 0;
}

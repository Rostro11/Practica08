/**
 * @author David Rostro Buide
 * @date Nov 20th 2022
 * @file: triangle area.
 * @brief: Realice un programa que tome como entrada las longitudes a, b y cde los lados de un triángulo y calcule su área utilizando la Fórmula de Herón.
 * @gmail: alu0101544359@ull.edu.es
 */

#include <iostream>
#include <cmath>

void PropositoDelPrograma() {
  std::cout << "Realizar un programa que tome como entrada las longitudes a, b y c de los lados de un triángulo y calcule su área utilizando la Fórmula de Herón. " << std::endl;
}

double Area(double valor_a, double valor_b, double valor_c) {
  double valor_s;
  valor_s = (valor_a + valor_b + valor_c) / 2;
  double resultado;
  resultado = sqrt(valor_s * (valor_s - valor_a) * (valor_s - valor_b) * (valor_s - valor_c));
  return resultado;
}

int main() {
  PropositoDelPrograma();
  double valor_a, valor_b, valor_c;
  std::cin >> valor_a >> valor_b >> valor_c;
  std::cout << Area(valor_a,valor_b,valor_c) << std::endl;
  return 0;
}

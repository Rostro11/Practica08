/**
 * @author David Rostro Buide
 * @date Nov 20th 2022
 * @name: Function example.
 * @brief: realizar el cálculo de la siguiente función matemática de tres variables.
 * alu0101544359@ull.edu.es
 */

#include <iostream>
#include <cmath>

void PropositoDelPrograma() {
  std::cout << "Este programa calcula el resultado de una función matemática y muestra el resultado por pantalla." << std::endl;
}

double CalculoFuncion(double variable_x,double variable_y,double variable_t) {
  double resultado;
  resultado = sqrt((2 * variable_t) - 4) / ((variable_x * variable_x) - (variable_y * variable_y));
  return resultado;
}

int main() {
  PropositoDelPrograma();
  double variable_x, variable_y, variable_t;
  std::cin >> variable_x >> variable_y >> variable_t;
  std::cout << CalculoFuncion(variable_x,variable_y,variable_t) << std::endl;
  return 0;
}

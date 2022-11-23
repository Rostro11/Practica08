/**
 * @author David Rostro Buide
 * @date Nov 20th 2022
 * @file: floating point arithmetics.
 * @brief: Desarrolle a continuación una función cuya definición sea: bool AreEqual(const double number1, const double number2, const double epsilon = 1e-7); que devuelva true o false dependiend    o de si los números que se le pasan como parámetro son aproximadamente iguales o no.
 * @gmail: alu0101544359@ull.edu.es
 */

#include <iostream>
#include <cmath>

void PropositoDelPrograma() {
  std::cout << "Desarrolle a continuación una función cuya definición sea: bool AreEqual(const double number1, const double number2, const double epsilon = 1e-7); que devuelva true o false dependiendo de si los números que se le pasan como parámetro son aproximadamente iguales o no." << std::endl;
}

void Usage(int argc, char *argv[]) {
  if (argc != 3) {
    std::cout << "Introduzca un número correcto de parámetros." << std::endl;
    exit(EXIT_SUCCESS);
  }
}

bool AreEqual(double numero1, double numero2, const double epsilon = 1e-7) {
  return fabs(numero1 - numero2) <= ((fabs(numero1) > fabs(numero2) ? fabs(numero2) : fabs(numero1)) * epsilon);
}

int main(int argc, char *argv[]) {
  PropositoDelPrograma();
  Usage(argc, argv);
  const double numero1 = std::stod(argv[1]);
  const double numero2 = std::stod(argv[2]);
  const double epsilon = 1e-7;
  if (AreEqual(numero1, numero2, epsilon) == 1) {
    std::cout << numero1 << " y " << numero2 << " son esencialmente iguales" << std::endl;
  }
  else {
    std::cout << numero1 << " y " << numero2 << " son diferentes" << std::endl;
  }
  return 0;
}

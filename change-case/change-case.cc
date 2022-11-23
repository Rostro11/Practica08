/**
 * @author David Rostro Buide
 * @date Nov 20th 2022
 * @file: Function example.
 * @brief: Realizar un programa que tome como entrada una cadena de caracteres sin espacios e imprima como salida la misma cadena convirtiendo los caracteres que sean letras mayúsculas por minúsculas y viceversa. Los caracteres que no sean letras mayúsculas ni minúsculas deberán permanecer inalterados.
 * @gmail: alu0101544359@ull.edu.es
 */

#include <iostream>
#include <string>

void PropositoDelPrograma() {
  std::cout << "Realizar un programa que tome como entrada una cadena de caracteres sin espacios e imprima como salida la misma cadena convirtiendo los caracteres que sean letras mayúsculas por minúsculas y viceversa. Los caracteres que no sean letras mayúsculas ni minúsculas deberán permanecer inalterados." << std::endl;
}

std::string MayusculaMinuscula(std::string cadena) {
  for (int i = 0; i < cadena.length(); ++i) {
    if (cadena[i] == toupper(cadena[i])) {
      cadena[i] = tolower(cadena[i]);
    }
    else if (cadena[i] == tolower(cadena[i])) {
      cadena[i] = toupper(cadena[i]);
    }
  }
  return cadena;
}

int main() {
  PropositoDelPrograma();
  std::string cadena;
  std::cin >> cadena;
  std::cout << MayusculaMinuscula(cadena) << std::endl;
  return 0;
}

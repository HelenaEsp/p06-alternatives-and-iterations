/**
 * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file letras_mayusculas_minus.cc
  * @author Helena Gutierrez Espinosa alu0101398662@ull.edu.es
  * @date 10-11-22
  * @brief Escribe un programa que lea tres números e imprima su máximo. 
  * "Máximo de tres números enteros diferentes".
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P90615
*/
#include <iostream>

using namespace std;

int main()
{
    int letra;
    cin >> letra;
    if (islower(letra)==true) {
        cout << toupper(letra);
        
    }
    else {
       cout << tolower(letra);
    }
    

    return 0;
}
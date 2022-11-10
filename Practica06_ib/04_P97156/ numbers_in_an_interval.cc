/**
 * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file maximo3Nums.cc
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
    int numA, numB;
    cin >> numA >> numB ;
     for (int i= numA; i<= numB; i++) {
     cout<<i;
     if (i!=numB){
         cout<<",";
     }
     else{
         cout<<endl;
     }
     }

    return 0;
}
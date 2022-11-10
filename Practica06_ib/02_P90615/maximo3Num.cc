/**
 * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file maximo3Nums.cc
  * @author Helena Gutierrez Espinosa alu0101398662@ull.edu.es
  * @date 18-11-21
  * @brief Escribe un programa que lea tres números e imprima su máximo. 
  * "Máximo de tres números enteros diferentes".
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P90615
*/
#include <iostream>
using namespace std;
int pedirNums();
int comparacion(int num1, int num2, int num3);
void imprimir_result(int maximo);

int main() {
  
  cout<<"el programa pide tres números e imprime su máximo.";
  imprimir_result(comparacion(pedirNums(),pedirNums(), pedirNums()));
  return 0;
}

int pedirNums() {
  int num;
  cout<<"introduzca el numero n:";
  cin>>num;
  return num;
}
int comparacion(int num1, int num2, int num3) {
  int maximo=num1;
  if (num2 > maximo) {
    maximo = num2;
  }
  if (num3 > maximo) {
    maximo = num3;
  }
  return maximo;
}
void imprimir_result(int maximo){
  cout << maximo << endl; 
}
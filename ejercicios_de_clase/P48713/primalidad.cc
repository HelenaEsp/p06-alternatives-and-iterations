/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file 
  * @author Helena Gutiérrez Espinosa alu0101398662@ull.edu.es
  * @date 10-11-22
  * @brief 
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P34279
  */
#include <iostream>
using namespace std;

int pedirNum();
void esPrimo(int num);

int main() {
  int num = pedirNum(),contador=0, primo=1;
  int vectorNumeros[num];
  for (int i{0}; i <= num-1; i++) {
    cin>> vectorNumeros[i];
  }
  for (int i {0};i <= num-1;i++) {
    esPrimo(vectorNumeros[i]);
  }
 return 0;
}

int pedirNum() {
  int num;
  //coutt<<"introduzca el numero de numeros que desesa introducir";
  cin >> num;
 return num;
}
void esPrimo(int num){
  int primo=1;
  for(int i=2;i<num;i++){
    if (num%i==0){
     primo=0;
    }
  }
 if(primo==0){
   cout<<num<<" is not prime"<<endl;
 }
 else{
   cout<<num<<" is prime"<<endl;
 }
 primo=1;
}
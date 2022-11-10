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
#include <vector>

using namespace std;

int main()
{
    int numList[100];
    for (int i=0;i<100;i++) {
        cin >> numList[i];
    }
    
    for (int i=1;i<=100;i++) {
     if (numList[i]%2==0&&numList[i]!=0){
      cout<< i <<endl;
      return 0;
      }
    }
    
    

    return 0;
}
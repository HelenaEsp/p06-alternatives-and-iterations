/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file integer_division_and_reminder.cc
  * @author Helena Gutiérrez Espinosa alu0101398662@ull.edu.es
  * @date 18-11-21
  * @brief Escribe un programa que agregue un segundo a la hora del reloj, 
  * dadas sus horas, minutos y segundos.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P34279
  */
#include<iostream>
#include<iomanip>
using namespace std;

int pedirhoras();
int pedirMinutos();
int pedirSegundos();
void sumaSegundo(int &horas, int &minutos, int &segundos);

int main() {
  cout<<"este programa pide horas minutos y segundos y agrega un segundo a la hora del reloj."<<endl;
  int horas =pedirhoras(), minutos = pedirMinutos(), segundos= pedirSegundos();
  sumaSegundo(horas, minutos, segundos);
  cout << setfill('0') << setw(2) << horas << ":";
  cout << setfill('0') << setw(2) << minutos << ":";
  cout << setfill('0') << setw(2) << segundos << endl;
  return 0;
}
int pedirhoras(){
  int horas;
  cout<< "introduzca las horas:";
  cin>>horas;
  while(horas >= 24) {
    cout<<"horas deben ser menor de 24.Pruebe de nuevo:";
    cin>>horas;
  }
  return horas;
}
int pedirMinutos() {
  int minutos;
  cout<< "introduzca los minutos:";
  cin>> minutos;
  while(minutos >= 60) {
    cout<<"minutos deben ser menor de 60.Pruebe de nuevo:";
    cin>> minutos;
  }
  return minutos;
}
int pedirSegundos() {
  int segundos;
  cout<< "introduzca los segundos:";
  cin>> segundos;
  while (segundos >= 60) {
    cout<<"segundos deben ser menor de 60.Pruebe de nuevo:";
    cin>> segundos;
  }
  return segundos;
}
void sumaSegundo(int &horas, int &minutos, int &segundos) {
  if (segundos == 59) {
    minutos += 1;
    segundos = 0;
    if (minutos == 60) {
        horas += 1;
        minutos = 0;
      if (horas == 24) {
          horas = 0;
      }
    }
  }
    
  else {   
    segundos += 1;
  } 
}
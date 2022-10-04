/*
Nombre del archivo : sumanumeros.cpp
Autor : Daniel Gutierrez
lugar : ITV
instrucciones : Generar numeros aleatorios
*/

#include<iostream>
#include<cstdlib> // c standard library
#include<ctime>

using namespace std;

int main(){
  int valorMax = 6, valorMin = 1;
    srand(time(0));
    short dado1 =(rand() % (valorMax - valorMin +1)) + valorMin;
    short dado2 =(rand() % (valorMax - valorMin +1)) + valorMin;
    
    cout << dado1 << "," << dado2;
    
    return 0;
}
    
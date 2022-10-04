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

	srand(time(nullptr));
    int aleatorio = rand()% 10;
    int num;

cout << "adivine un numero entre 0 y 10";
cin >>num;

if(num== aleatorio){
	cout << " Felicidades , acertastes !";
} else{
	cout << "Lo siento , no asertastes! ";
}

	
	return 0;
}



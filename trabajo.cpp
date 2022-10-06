/*
Nombre del archivo : sumanumeros.cpp
Autor : Daniel Gutierrez
lugar : ITV
instrucciones : Ejemplos de manipulacion de E/S
*/

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	cout << left;
	cout << setw(20) << "Asignatura" << setw(10) << "Estudiantes" << endl
	 << setw(20) << "Programacion" << setw(10) << right << "12" << endl
	 <<left << setw(20) << "Redes" << setw(10) << right << "9" ;
	
	return 0;
}
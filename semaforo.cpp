/*
Nombre del archivo : sumanumeros.cpp
Autor : Daniel Gutierrez
lugar : ITV
instrucciones : Ejemplos de manipulacion de E/S
*/

#include<iostream>


using namespace std;

int main(){
	int edad;
	char color;
	cout << " Ingrese su edad ";
	cin >> edad;
	
	if(edad < 17){
		cout << "ud no tiene la edad suficiente para conducir un vehiculo. " << endl;
	} else {
		cout << " Color del semaforo : ( R=rojo, A = amarillo, V = verde)";
		cin >> color;
		
		if(color == 'R'){
			cout << " Baje la velocidad hasta detenerse suavemente." << endl;
		} else if (color == 'A'){
			cout << " Tenga precaucion. No puede avansar." << endl;
		} else if (color == 'V'){
			cout << " Siga adelante." << endl;
		} else {
			cout << " Color incorrecto/Invalido." << endl;
		}
		
	}
	cout << "Fin del Programa " << endl;
	
	
	return 0;
}
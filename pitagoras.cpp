/*
Nombre del archivo : sumanumeros.cpp
Autor : Daniel Gutierrez
lugar : ITV
instrucciones : uso de las constantes
*/
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	double cateto1, cateto2, hipotenusa;
	cout << " Ingrese la cateto1:";
	cin >> cateto1;
	cout << " Ingrese la cateto2:";
	cin >> cateto2;
	
	hipotenusa = sqrt (pow(cateto1,2))+(pow(cateto2,2));
	
	cout << "cateto1 =" << cateto1 << endl;
	cout << "cateto2 =" << cateto2 << endl;
	cout << "hipotenusa =" << hipotenusa << endl;
	return 0;
}



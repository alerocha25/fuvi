/*
Nombre del archivo : calculosalarioneto.cpp
Autor : Daniel Gutierrez
lugar : ITV
instrucciones : Ejemplos de Programacion estructura
*/

#include<iostream>
#include<string>

using namespace std;
const double TASA_ANTIGUEDAD =	15;
const double TASA_SINDICATO =1;
const double TASA_INSS =7;
const double TASA_IR =	15.6;
const double TASA_INSS_PATRONAL =22.5;
int main(){
	
	double salarioBasico, ingresoNeto, ingresoTotal, deduccionesTotales;
	double montoAntiguedad, montoSindicato, montoINSS, montoIR, montoINSSpatronal;
	string nombre;
	//Pedir datos al usuario
	cout << "Ingrese su nombre ";
	cin >> nombre;
	cout << "Hola" << nombre << "Ingrese su salario basico: C$ ";
	cin >> salarioBasico;
	// Ingresos
	montoAntiguedad = salarioBasico * (TASA_ANTIGUEDAD/100);
	ingresoTotal = salarioBasico + montoAntiguedad;
	//CALCULAR LAS DEDUCCIONES
	montoSindicato = salarioBasico * (TASA_SINDICATO/100);
	montoINSS = ingresoTotal * (TASA_INSS/100);
	montoIR = ingresoTotal * (TASA_IR/100);
	deduccionesTotales = montoSindicato + montoINSS + montoIR;
	//Ingreso neto
	ingresoNeto =  ingresoTotal - deduccionesTotales;
	//Calcular las deducciones al empleador
	montoINSSpatronal = ingresoTotal * (TASA_INSS_PATRONAL/100);
	//Mostrar Resultados
	cout << " Salario bruto o basico = C$ " << salarioBasico << endl;
	cout << " *****Ingresos totales***** " << endl;
	cout << " Monto por antiguedad = C$ " << montoAntiguedad << endl;
	cout << " Monto de ingresos totales = C$ " << ingresoTotal << endl;
	cout << " *****Deducciones totales***** " << endl;
	cout << " Monto por sindicato = C$ " << montoSindicato << endl;
	cout << " Monto por INSS = C$ " << montoINSS << endl;
	cout << " Monto por IR = C$ " << montoIR << endl;
	cout << " Monto deducciones totales = C$ " << deduccionesTotales << endl;
	cout << "*****Ingreso total neto*****" << endl;
	cout << "Ingreso neto = C$ " << ingresoNeto << endl;
	cout << "*****Deducciones del empleador*****" << endl;
	cout << "INSS PATRONAL = C$ " << montoINSSpatronal << endl;

	return 0;
	
	
	
	cout << left;
	cout <<sewt(20) << "Ingresos totales" << setw(10) << "$" <<
}
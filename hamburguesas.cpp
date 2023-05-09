#include <iostream>
#include <stdio.h>
using namespace std;
int main (){

	int ham;
	int ham_con;
	int papas;
	int refresco;
	int malteadas;
	int hot_dog;
	int aros_cebolla;
	int total;

	cout << "ingresa la cantidad  de hamburguesas que quieras pedir: ";

	cin >> ham;

	cout << "ingresa la cantidad de hamburguesas con queso que quieras pedir: ";

	cin >> ham_con;

	cout << "ingresa la cantidad de ordenes de papas que quieras:";

	cin >> papas;

	cout << "ingresa la cantidad de refrescos que quieras: ";

	cin >> refresco;

	cout << "ingresa la cantidad de malteadas que quieras: ";

	cin >> malteadas;

	cout << "ingresa la cantidad de hot dogs que quieras: ";

	cin >> hot_dog;

	cout << "ingresa la cantidad de aros de cebollas que quieras: ";

	cin >> aros_cebolla;

	total = ham * 55 + ham_con * 60 + papas * 30 + refresco * 35 + malteadas * 50 + hot_dog * 40 + aros_cebolla * 40;

	cout << "el total a pagar es de " << total << " pesos" << '\n';

	cout << "hecho por Garcia Cortes" << '\n'; 
	
	return 0;
}


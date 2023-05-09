#include <iostream>
#include <stdio.h>
using namespace std;
int main (){
	//declaracion de variables 
	float producto_1;
	float producto_2;
	float producto_3;
	float descuento;
	float total_a_pagar;

	cout << "ingresa el costo de el producto 1: ";

	cin >> producto_1;
	
	cout << "ingresa el costo de el producto 2: ";

	cin >> producto_2;
	
	cout << "ingresa el costo de el producto 3: ";

	cin >> producto_3;

	cout << "ingresa el porcentaje a descontar:";

	cin >> descuento;

	total_a_pagar = (producto_1 + producto_2 + producto_3) * descuento;

	cout << "el descuento es de " << total_a_pagar << '\n';

	cout << "hecho por Garcia Cortes";
	

	return 0;
}

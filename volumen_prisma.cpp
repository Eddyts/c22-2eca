#include <iostream>
#include <stdio.h>
using namespace std;
int main (){
	//declaracion de variables 
	int largo;
	int ancho;
	int altura;
	int volumen;

	cout << "ingresa el largo de el prisma: ";

	cin >> largo;

	cout << "ingresa la altura de el prisma: ";

	cin >> altura;

	cout << "ingresa el ancho de el prisma:";

	cin >> ancho;

	volumen = largo * altura * ancho;

	cout << "el volumen de el prisma con base rectangular es : " << volumen << '\n';

	cout << "hecho por Garcia Cortes" << '\n';

	return 0;
}

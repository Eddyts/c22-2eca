#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	
	//declaracion de variables 
	
	float base;
	
	float altura;
	
	float area;

	cout << "ingresa la base de el triangulo: ";

	cin >> base;

	cout << "ingresa la altura de el triangulo: ";
	
	cin >>  altura; 
	
	area = (base * altura) / 2;

	cout << area << '\n';

	cout << "hecho por Garcia Cortes" << '\n';	
	
	return 0;
}

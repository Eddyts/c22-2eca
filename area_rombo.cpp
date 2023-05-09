#include <iostream>
#include <stdio.h>
using namespace std;

int main(){	
	
	//declaracion de las variables 
	
	float dim_mayor;
	float dim_menor;
	float area;
	
	//entrada de datos 
	
	cout << "ingresa el valor de la diagonal mayor: ";
	
	cin >> dim_mayor;
	
	cout << "ingresa el valor de la diagonal menor: ";
	
	cin >> dim_menor;
	
	area = (dim_mayor * dim_menor) / 2;

	cout << area << '\n';

	cout <<  "hecho por Garcia Cortes" << '\n';
	
	return 0;
}

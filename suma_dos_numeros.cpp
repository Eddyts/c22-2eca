#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
	// declaracion de variables 
	int x;
	int y;
	int suma;
	
	// entrada de los valores de las variables
	cout  << "ingresa el primer numero: ";
	cin >> x;
	cout  << "ingresa el segundo numero: ";
	cin >> y;

	suma = x + y;
	
	cout << suma << "\n";
	
	return 1;
}

#include <iostream>
#include <stdio.h>
using namespace std;
int main (){
	
	//declaracion de variables
	
	float celcius;
	float fahrenheit;
	
	cout << "ingresa la temperatura en grados celcius: ";

	cin >> celcius;	

	fahrenheit = celcius * 1.8 + 32;

	cout << "los grados celcius son: " << fahrenheit << " grados fahrenheit" << '\n';

	cout << "hecho por Garcia Cortes" << '\n';

	return 0;
}

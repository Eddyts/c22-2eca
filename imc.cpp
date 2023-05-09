#include <iostream>
#include <stdio.h>
using namespace std;
int main (){
	
	int  peso;
	float altura;
	float  imc;

	cout << "ingresa el peso en kg:";

	cin >> peso;

	cout << "ingresa la altura en metros:";

	cin >> altura;

	imc = peso / altura / altura ;

	cout << "el imc es " << imc <<'\n';

	cout <<"hecho por Garcia Cortes" << '\n';
	
	return 0;
}

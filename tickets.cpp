#include <iostream>

using namespace std;

int main (){

	float ttck,tpta,tp;

	cout << "Ingresa el valor total de los tickets : ";
		cin >> ttck;
	cout << "Ingresa el valor a pagar de todos los tickets : ";
       		cin >> tpta;

	tp = (ttck*tpta);

	cout << "El resultado es " << tp << endl; 	

	cout << "Hecho por Garcia Cortes " << endl;


	return 0;
}

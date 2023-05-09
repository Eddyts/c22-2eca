#include <iostream>

using namespace std;

int main () {

	float na,nn,ca,cn,tp;

	cout << "Ingresa el numero de ninios : ";
		cin >> nn;
	cout << "Ingresa el numero de adultos :  ";
		cin >> na;
	cout << "Ingresa el valor de el costo de boletos de ninios : ";
		cin >> cn;
	cout << "Ingresa el valor de el costo de boletos de adultos : ";
		cin >> ca;
	
	tp = ((na*ca))+(nn*cn);

	cout << "El total es de " << tp << endl;

	cout << "Hecho por Garcia Cortes " << endl;

	return 0;
}

#include <iostream>
#include <stdio.h>
using namespace std;
int main(){

	int horas;
	int paga;
	int total;

	cout <<"ingresa el numero de horas trabajadas: ";

	cin >> horas;

	cout << "ingresa la paga por hora: ";

	cin >> paga;

	total = horas * paga;

	cout << "la paga por hora es de  " << total << " pesos" << '\n';

	cout << "hecho por Garcia Cortes" << '\n';

	return 0;
}

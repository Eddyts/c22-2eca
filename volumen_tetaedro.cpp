#include <iostream>

using namespace std;

int main (){

	float ar,c,volumen;

	cout << "Ingresa el valor de la arista : ";
		cin >> ar;

	cout << "Ingresa el valor de c : ";
		cin >> c;

	volumen = (c*(ar*ar*ar));

	cout << "El resultado es " << volumen << endl;

	cout << "Hecho por Garcia Cortes" << endl;

	return 0;
}

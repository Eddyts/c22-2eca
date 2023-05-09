#include <iostream>
using namespace std;
int main(){
	
	//variables
	
	int opcion,cantidad,orden;
	float total;
	while(orden!=2)
{
	cout <<"****************************************** " << '\n';
	cout <<"*************** MENU PEPIS *************** " << '\n';
	cout <<"****************************************** " << '\n';
	
	cout << "1)PASTEL DE CHOCOLATE >>>>>>>>> $130 " << '\n';
	cout << "2)PASTEL DE FRESA >>>>>>>>> $145 " << '\n';
	cout << "3)PASTEL DE NUEZ >>>>>>>>> $125 " << '\n';
	cout << "4)PASTEL DE VAINILLA >>>>>>>>> $110 " << '\n';

	cout << '\n';
	
	cout <<" SELECCIONE LO  QUE QUIERA PEDIR " << '\n';

	cout << "OPCION	: ";
	cin >> opcion;

	switch(opcion)
	{
		case 1:
		cout << "Eligio el pastel de chocolate" << '\n';
		cout << "Cuatos desea ordenar: ";
		cin >> cantidad;
		total = 130 * cantidad;
		cout << "EL TOTAL A PAGAR ES DE : $" << total << '\n';
		break;

		case 2:
		cout << "Eligio el pastel de fresa" << '\n';
                cout << "Cuatos desea ordenar: ";
		cin >> cantidad;
		total = 145 * cantidad;
		cout << "EL TOTAL A PAGAR ES DE : $" << total << '\n';
		break;

		case 3:
		cout << "Eligio el pastel de nuez" << '\n';
                cout << "Cuatos desea ordenar: ";
                cin >> cantidad;
                total = 125 * cantidad;
                cout << "EL TOTAL A PAGAR ES DE : $" << total << '\n';
		break;

		case 4:
		cout << "Eligio el pastel de vainilla" << '\n';
                cout << "Cuatos desea ordenar: ";
                cin >> cantidad;
                total = 110 * cantidad;
                cout << "EL TOTAL A PAGAR ES DE : $" << total << '\n';
                break;

		default:
		cout << "OPCION INVALIDA" << '\n';
	}
		cout << "Desea tomar otra orden 1)si  2)no" << endl;
		cin >> orden;
}
return 0;
}

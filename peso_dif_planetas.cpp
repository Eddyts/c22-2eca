#include <iostream>
using namespace std;
int main(){

	int opcion,planeta,op;
	float peso,kg;
	while(op!=2)
{
	cout << "*****************************" << endl;
	cout << "*Peso en diferentes planetas*" << endl;
	cout << "*****************************" << endl;

	cout << "1)Mercurio" << endl;
	cout << "2)Venus" << endl;
	cout << "3)Tierra" << endl;
	cout << "4)Marte" << endl;
	cout << "5)Jupiter" << endl;
	cout << "6)Saturno" << endl;
	cout << "7)Urano" << endl;
	cout << "8)Neptuno" << endl;

	cout << "SELECCIONE LA OPCION QUE QUIERA ELEGIR" << endl;
	cout << "OPCION : ";
	cin >> opcion;

	switch(opcion)
	{	
	case 1:
	cout << "Eligio el planeta Mercurio" << endl;
	cout << "Ingrese su peso en kg : ";
		cin >>kg;
	peso = kg * 0.377;
	cout << "Su peso es de " << peso << " kg en Mercurio";
	break;

	case 2:
        cout << "Eligio el planeta Venus" << endl;
        cout << "Ingrese su peso en kg : ";
                cin >>kg;
        peso = kg * 0.904;
        cout << "Su peso es de " << peso << " kg en Venus";
        break;

	case 3:
        cout << "Eligio el planeta Tierra" << endl;
        cout << "Ingrese su peso en kg : ";
                cin >>kg;
        peso = kg * 1;
        cout << "Su peso es el mismo";
        break;

	case 4:
        cout << "Eligio el planeta Marte" << endl;
        cout << "Ingrese su peso en kg : ";
                cin >>kg;
        peso = kg * 0.378;
        cout << "Su peso es de " << peso << " kg en Marte";
        break;

	case 5:
        cout << "Eligio el planeta Jupiter" << endl;
        cout << "Ingrese su peso en kg : ";
                cin >>kg;
        peso = kg * 2.528;
        cout << "Su peso es de " << peso << " kg en Jupiter";
        break;

	case 6:
        cout << "Eligio el planeta Saturno" << endl;
        cout << "Ingrese su peso en kg : ";
                cin >>kg;
        peso = kg * 1.061;
        cout << "Su peso es de " << peso << " kg en Saturno";
        break;

	case 7:
        cout << "Eligio el planeta Urano" << endl;
        cout << "Ingrese su peso en kg : ";
                cin >>kg;
        peso = kg * 0.904;
        cout << "Su peso es de " << peso << " kg en Urano";
        break;

	case 8:
        cout << "Eligio el planeta Neptuno" << endl;
        cout << "Ingrese su peso en kg : ";
                cin >>kg;
        peso = kg * 1.137;
        cout << "Su peso es de " << peso << " kg en Neptuno";
        break;

	default :
	cout << "OPCION INVALIDA" << endl;
}
	cout << endl;
	cout << "Desea elegir otra opcion   1) si   2)no    ";
		cin >> op;
		
}
	cout << "Hecho por Garcia Cortes" << endl;	
return 0;
}

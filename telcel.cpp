#include <iostream>
using namespace std;
int main(){

	char paquete;
	int me;
	float renta,tpagar;

	cout << "PAQUETES" << endl;
	cout << "Paquete a = $500 + minuto extra = x5 " << endl;
	cout << "paquete b = $800 + minuto extra = x7 " << endl;
	cout << "paquete c = 1400 + minuto extra = x9 " << endl;
	cout << "paquete d = 2000 " << endl;
        
	cout << "seleccione el paquete" << endl;
		cin >> paquete;
	cout << "Ingrese los minutos extras" << endl;
		cin >> me;


	if (paquete == 'a'){
	renta = 500;
	tpagar = renta + (me*5);
	cout << "El paquete seleccionado fue el a" << endl;
cout << "El total a pagar es de : " << tpagar << endl;
	}

	else if ( paquete == 'b'){
        renta = 800;
        tpagar = renta + (me*7);
	cout << "El paquete seleccionado fue el b" << endl;
        cout << "El total a pagar es de : " << tpagar << endl;
        }

	else if (paquete == 'c'){
        renta = 1400;
        tpagar = renta + (me*9);
	cout << "El paquete seleccionado fue el c" << endl;
        cout << "El total a pagar es de : " << tpagar << endl;
        }

	else if (paquete == 'd'){
        renta = 2000;
        tpagar = renta;
	cout << "El paquete seleccionado fue el d" << endl;
        cout << "El total a pagar es de : " << tpagar << endl;
        }


	
	return 0;
}

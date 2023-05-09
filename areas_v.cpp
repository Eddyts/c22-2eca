#include <iostream>
using namespace std;
int main(){

	float area_tri,area_c,area_tra,area_cua;
	float h_tri,b_tri,radio,bm_tra,b_tra,h_tra,l;
	float pi = 3.1416;
	int opcion,area;

	while(area!=2)
{
	 
	cout << "*****************************************" << '\n';
	cout << "****ELIGE EL AREA QUE QUIERAS EVALUAR****" << '\n';
	cout << "*****************************************" << '\n';
	
	cout << endl;

	cout << "1) Area de el Traingulo " << '\n';
	cout << "2) Area de el Circulo " << '\n';
	cout << "3) Area de el Trapecio " << '\n';
	cout << "4) Area de el Cuadrado " << '\n';
	
	cout << endl;

	cout << "SELECCIONE LA OPCION : " << '\n';
	cin >> opcion;

	cout << endl;

	switch(opcion)
	{
		case 1:
		cout << "SELECCIONASTE EL TRIANGULO" << '\n';
		cout << "Ingresa la base de el triangulo : ";
		cin >> b_tri;
		cout << "Ingresa la altura de el triangulo : ";
		cin >> h_tri;
		area_tri = (b_tri * h_tri) / 2;
		cout << "EL AREA ES DE : " << area_tri << '\n';
		break;
		
		case 2:
		cout << "SELECCIONASTE EL CIRCULO" << '\n';
        	cout << "Ingresa el radio de el circulo	: ";
        	cin >> radio;
        	area_c = pi * (radio * radio);
        	cout << "EL AREA ES DE : " << area_c << '\n';
		break ;
		
		case 3:
		cout << "SELECCIONASTE EL TRAPECIO" << '\n';
        	cout << "Ingresa la base menor de el trapecio : ";
        	cin >> b_tra;
        	cout << "Ingresa la base mayor de el trapecio : ";
        	cin >> bm_tra;
		cout << "Ingresa la altura de el trapecio : ";
		cin >> h_tra;
        	area_tra = (b_tra + bm_tra * h_tra) / 2;
        	cout << "EL AREA ES DE : " << area_tra << '\n';
        	break;
		
		case 4:
		cout << "SELECCIONASTE EL CUADRADO" << '\n';
		cout << "Ingresa el lado de el cuadrado : ";
        	cin >> l;
        	area_cua = l * l;
        	cout << "EL AREA ES DE : " << area_cua << '\n';
		break;

		default:
                cout << "OPCION INVALIDA" << '\n';
        } 	
		cout << endl;
		cout <<"Desea elegir otra formula 1)si   2)no  " << endl;
 		cin >> area;
		cout << endl;
}
		cout << "hecho por Garcia Cortes" << endl;
return 0;
}

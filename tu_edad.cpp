#include <iostream>
using namespace std;

int main(){

	int x;
	int y;
	int edad;
	
	cout << "ingresa el anio en que naciste: ";
	
	cin >> x;
	
	cout << "ingresa el anio en el que estas: ";
	
	cin >> y;
	
	edad = y - x;

	cout << "Tu edad es de " << edad << " anios" << '\n';		
	
	cout << "Hecho por Garcia Cortes" << endl;

	return 1;
}

#include <iostream>
#include <stdio.h>
using namespace std;
int main (){
        //declaracion de variables 

        float prom_1;
        float prom_2;
        float prom_3;
        float prom_4;
        float promedio;

        cout << "ingresa el promedio 1: ";

        cin >> prom_1;

        cout << "ingresa el promedio 2: ";

        cin >> prom_2;

        cout << "ingresa el promedio 3: ";

        cin >> prom_3;

        cout << "ingresa el promedio 4: ";

        cin >> prom_4;

        promedio = (prom_1 + prom_2 + prom_3 + prom_4)/4;

        cout << "el promedio es " << promedio <<'\n';

        cout << "hecho por Garcia Cortes ";

	return 0;
}


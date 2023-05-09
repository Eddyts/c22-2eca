#include <iostream>
#include <stdio.h>
using namespace std;
int main (){
        //declaracion de variables
	 
        float producto_1;
        float producto_2;
        float producto_3;
        float descuento;
        float precio_con_descuento;
	float precio_sin_descuento;

        cout << "ingresa el costo de el producto 1: ";

        cin >> producto_1;

        cout << "ingresa el costo de el producto 2: ";

        cin >> producto_2;

        cout << "ingresa el costo de el producto 3: ";

        cin >> producto_3;

	precio_sin_descuento = producto_1 + producto_2 + producto_3; 

	cout << "el precio sin descuento es de: " << precio_sin_descuento << '\n';

        cout << "ingresa el descuento:";

        cin >> descuento;

	descuento = descuento * precio_sin_descuento;
 
        precio_con_descuento = precio_sin_descuento - descuento ;

        cout << "el precio con descuento  es de " << precio_con_descuento << '\n';

        cout << "hecho por Garcia Cortes" << '\n';


        return 0;
}


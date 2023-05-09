#include <iostream>
#include <string>
using namespace std;

int main() {
    // variables para almacenar información del trabajador
    string departamento, nombre;
    int numero_empleado;
    double horas_normales,sueldo_en_hrs,horas_dobles,sueldo_diario,horas_trabajadas,horas_extra,horas_triple,total_pagar;
 
    // entrada de datos del usuario
    cout << "INGRESE DATOS\n";
    cout << "Ingrese el número de empleado: ";
    cin >> numero_empleado;
    cout << "Ingrese el nombre del trabajador: ";
    cin.ignore();
    getline(cin, nombre);
    cout << "Ingrese el departamento: ";
    getline(cin, departamento); 
    cout << "Ingrese el sueldo diario: ";
    cin >> sueldo_diario;
    cout << "Ingrese las horas trabajadas: ";
    cin >> horas_trabajadas;

    if (horas_trabajadas <= 40){
	    horas_normales = horas_trabajadas;
    }
    else if(horas_trabajadas <= 50){
	    horas_normales = 40;
	    horas_dobles = horas_trabajadas - horas_normales;
    }
    else if(horas_trabajadas <= 60){
	    horas_normales = 40;
	    horas_dobles = 10;
	    horas_triple = (horas_trabajadas - horas_normales) - horas_dobles;
    }
       
    sueldo_en_hrs = sueldo_diario / 24;
    cout << "Sueldo en horas : $" << sueldo_en_hrs << endl;		
    cout << "Horas trabajadas normales : " << horas_normales << endl;
    cout << "Horas trabajadas extras : " << horas_dobles << endl;
    cout << "Horas trabajadas triples :" << horas_triple << endl;

    total_pagar = (sueldo_en_hrs * horas_normales) + (sueldo_en_hrs * 2 * horas_dobles) + (sueldo_en_hrs * 3 * horas_triple);
    
    cout << "El sueldo total es de : $" << total_pagar << endl;
    cout << "Hecho por Garcia Cortes" << endl;

    return 0;
}

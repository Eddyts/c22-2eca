#include <iostream>
using namespace std;

int main() {
     
    int numero_empleado = 1;
    double sueldo_en_horas,sueldo_diario = 350, horas_trabajadas = 30, horas_extra = 0, horas_triple = 0, total_pagar;
   sueldo_en_horas = sueldo_diario / 24;
   total_pagar =  sueldo_en_horas * horas_trabajadas;
    cout << "Home Depot\n";
    cout << "Número de empleado: " << numero_empleado << endl;
    cout << "Nombre del trabajador: " << "Eduardo David Garcia Cortes" << endl;
    cout << "Departamento: " << "INTENDENCIA" << endl;
    cout << "Sueldo diario: " << sueldo_diario << endl;
    cout << "Sueldo en horas: " << sueldo_en_horas << endl;
    cout << "Horas trabajadas: " << horas_trabajadas << endl;
    cout << "Numero de horas extras: " << horas_extra << endl;
    cout << "Numero de horas dobles: " << horas_triple << endl; 
    cout << "Total a pagar : $" << total_pagar << endl;
    cout << "Hecho por Garcia Cortes" << endl;
 
    return 0;
}

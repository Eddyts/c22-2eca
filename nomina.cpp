#include <iostream>//cin y cout
#include <string>
using namespace std;
int main(){	
	string nom;
	float num_tra,dt,des,pdt,per,pg,pb;
	float s_des = 0.10;
	float p = 0.25;
	float s_per,s_sin_per,s_pdt;

	cout << "         **********************************         " << '\n';
	cout << "**********Departamento de Recursos humanos**********" << '\n';
	cout << "         **********************************         " << '\n';

	cout << '\n';

	cout << "* Ingrese el nombre de el trabajador:";	
	getline(cin, nom);

	cout << "* Ingrese el numero de trabajador: ";
	cin >> num_tra;

	if(num_tra < 16)
	{
	cout << "* Su numero de trabajador indica que pertenece a el Turno Matutino" << '\n';
	}	
	else
	{
	cout << "* Su numero de trabajador indica que pertenece a el Turno Nocturno" << '\n';
	}

	cout << "* Ingrese los dias trabajados: ";
	cin >> dt;

	cout << endl;	 

	cout <<"         ***********************************         " << '\n';
       	cout <<"**********************DESCUENTOS******************** " << '\n';	
	cout <<"         ***********************************         " << '\n';
	cout <<"           *El Sueldo  	BRUTO  es de $4641*          " << '\n';
	cout <<"           ********************************          " << '\n';
       
	cout << '\n';

	cout << "*imss %5 de el sueldo " << '\n';
	cout << "*fondo horas %5 de el sueldo" << '\n';
	
	pdt = 4641 / 13;
	
	des = pdt * dt * 0.10;

	cout <<"El descuento es de $  " << des << '\n';

	
	s_des = dt * pdt - des;

	cout <<"El sueldo con descuentos incluidos es de $" << s_des << " pesos" << '\n';

	cout << '\n';

	if(dt > 14)
        {
        cout <<"             *USTED RECIBE PERCEPCIONES" << '\n'; 
       		cout << '\n';

	cout <<"         ***********************************         " << '\n';
	cout <<"********************PERCEPCIONES******************** " << '\n';
	cout <<"         ***********************************         " << '\n'; 	
	
	cout << '\n';

	cout <<"*Bono de $500 cada Quincena" << '\n';
	cout <<"*Gasolina 250 cada Quincena" << '\n';
	cout <<"*La productividad otorgara 25%" << '\n';

	p = s_des * 0.25;
	pb = 500 * (dt/15);
        pg = 250 * (dt/15);
	
	cout << '\n';
	cout << "La productividad otorga " << p << " pesos extras" << '\n';
	cout << "El bono otorga " << pb << " pesos extras" << '\n';
	cout << "La gasolina otroga " << pg << " pesos extras" << '\n';


	per = + pg + pb + p;

	s_per =  s_des + per;

	cout << '\n';

	cout << "EL SUELDO NETO ES DE " << s_per << '\n';

	}

	else
	{
 
	cout <<"         ***********************************         " << '\n';
        cout <<"*******************EL SUELDO NETO******************* " << '\n';
        cout <<"         ***********************************         " << '\n';
	
	cout << endl;

	cout <<"LA PAGA POR DIA ES DE $" << pdt << '\n';
	cout << '\n';
	cout << "EL SUELDO NETO ES DE  $" << s_des << '\n';
	cout << '\n';
	cout <<	"         *SU SUELDO NO  TIENE PERCEPCIONES " << '\n';	
	}	
	cout << '\n';
	cout << "hecho por Garcia Cortes" << '\n';

	return 0;
}

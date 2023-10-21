/*5. De un operario se conoce su sueldo y los años de antiguedad. Se pide confeccionar un programa que lea los datos de
entrada e informe:
a) Si el sueldo es inferior a 5000 y su antiguedad es igual o superior a 10 años, otorgarle un aumento del 20 %, mostrar el sueldo
a pagar.
b)Si el sueldo es inferior a 5000 pero su antiguedad es menor a 10 años, otorgarle un aumento de 5 %.
c) Si el sueldo es mayor o igual a 5000 mostrar el sueldo en pantalla sin cambios. */

#include <iostream>

using namespace std;

main(){
	int sueldo, sueldo1, antiguedad;
	setlocale(LC_ALL,"Spanish");
	cout << "\nIntroduzca su sueldo: ";
	cin >> sueldo;
	cout << "\nIntroduzca su antigüedad en años: ";
	cin >> antiguedad;
	if ((sueldo<5000) && (antiguedad >= 10)){
		sueldo1 = sueldo * 1.2;
	}
	else if ((sueldo<5000) && (antiguedad < 10)){
		sueldo1 = sueldo * 1.05;	
	}
	else{
		sueldo1=sueldo;
	}
		cout <<"\nEl sueldo es: $"<< sueldo1 << endl;
}

                                    //PRACTICA 5 :)
                                 //YOSHIO GEOVANNI GARCIA LOPEZ


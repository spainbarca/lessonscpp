#include <iostream>
using namespace std;

/* Ejercicio 3: Ejercicio 3: Realice un programa que lea de la entrada est�ndar los siguientes datos de una persona:
 Edad: dato de tipo entero.
 Sexo: dato de tipo car�cter.
 Altura en metros: dato de tipo real.
Tras leer los datos, el programa debe mostrarlos en la salida est�ndar. */

int main() {
	int edad;
	char sexo;
	float altura; 
	
	cout << "Ingrese su edad: "<<endl; cin >> edad; 
	cout << "Ingrese su genero (masculino [M], femenino [F]): "<<endl; cin >> sexo; 
	cout << "Ingrese su altura: "<<endl; cin >> altura; 
	
	cout << "______________________________ " <<endl; 
	cout << "La edad de la persona es: " << edad <<endl; 
	cout << "El g�nero de la persona es: " << sexo <<endl; 
	cout << "La altura de la persona es: " << altura <<endl; 

	return 0;
}

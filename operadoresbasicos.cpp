#include <iostream>
using namespace std;
/* Ejercicio 1: un programa que lea 2 numeros y muestre por cada salida la suma, resta, multiplicacion y division */

int main() {
	int n1, n2, suma=0, resta=0, multiplicacion=0, division=0; 
	
	cout << "Ingrese el numero 1: "<<endl; cin >> n1; 
	cout << "Ingrese el numero 2: "<<endl;cin >> n2;
	
	suma = n1 + n2;
	resta = n1 - n2;
	multiplicacion = n1 * n2;
	division = n1 / n2;
	
	cout << "La suma es: " << suma <<endl; 
	cout << "La resta es: " << resta <<endl; 
	cout << "La multiplicacion es: " << multiplicacion <<endl; 
	cout << "La division es: " << division <<endl; 

	return 0;
}

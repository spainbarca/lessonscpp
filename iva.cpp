#include <iostream>
using namespace std;
/* Ejercicio 1: un programa que lea 2 numeros y muestre por cada salida la suma, resta, multiplicacion y division */

int main() {
	float precio, precioiva=0; 
	
	
	cout << "Ingrese el precio del producto: "<<endl; cin >> precio; 
	
	precioiva = precio * 1.18;
	
	cout << "El precio con IVA del producto es: " << precioiva <<endl; 

	return 0;
}

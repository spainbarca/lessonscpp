#include <iostream>
using namespace std;
/* Ejercicio 2: Escribe un programa que lea de la entrada estándar el precio de un producto y muestre en la salida estándar el precio del producto al aplicarle el IVA. */

int main() {
	float precio, precioiva=0; 
	
	
	cout << "Ingrese el precio del producto: "<<endl; cin >> precio; 
	
	precioiva = precio * 1.18;
	
	cout << "El precio con IVA del producto es: " << precioiva <<endl; 

	return 0;
}

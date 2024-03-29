#include <iostream>
using namespace std;

int main() {
	float x, y, aux; 
	
	cout << "Ingrese el numero 1 "<<endl; cin >> x; 
	cout << "Ingrese el numero 2: "<<endl; cin >> y;
	
	aux = x;
	x = y;
	y = aux;
	
	cout << "______________________________ " <<endl; 
	cout << "El número 1 ahora es: " << x <<endl;
	cout << "El número 2 ahora es: " << y <<endl; 

	return 0;
}

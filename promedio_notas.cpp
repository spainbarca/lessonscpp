#include <iostream>
using namespace std;

int main() {
	float a, b, c, d, prom = 0; 
	
	cout << "Ingrese la nota 1: "<<endl; cin >> a; 
	cout << "Ingrese la nota 2: "<<endl; cin >> b;
	cout << "Ingrese la nota 3: "<<endl; cin >> c; 
	cout << "Ingrese la nota 4: "<<endl; cin >> d; 
	
	prom = (a+b+c+d)/4;
	
	cout.precision(4);
	cout << "______________________________ " <<endl; 
	cout << "El promedio de las notas es: " << prom <<endl; 

	return 0;
}

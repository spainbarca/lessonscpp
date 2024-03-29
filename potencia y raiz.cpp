#include <iostream>
#include <math.h>

using namespace std;

int main() {
	float x, y, resultado = 0; 
	
	cout << "Ingrese el valor de x: "<<endl; cin >> x; 
	cout << "Ingrese el valor de y: "<<endl; cin >> y;

	resultado = sqrt(x)/(pow(y, 2)-1);
	
	cout.precision(4);
	cout << "______________________________ " <<endl; 
	cout << "El resultado es: " << resultado <<endl; 

	return 0;
}

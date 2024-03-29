#include <iostream>
#include <math.h>

using namespace std;

int main() {
	float c1, c2, hipo = 0; 
	
	cout << "Ingrese la medida del cateto 1: "<<endl; cin >> c1; 
	cout << "Ingrese la medida del cateto 2: "<<endl; cin >> c2;

	hipo = sqrt(pow(c1, 2)+ pow(c2,2));
	
	cout.precision(4);
	cout << "______________________________ " <<endl; 
	cout << "La medida de la hipotenusa es: " << hipo <<endl; 

	return 0;
}

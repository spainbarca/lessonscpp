#include <iostream>
using namespace std;

int main() {
	float a, b, c, d, res4 = 0; 
	
	cout << "Ingrese el numero 1 "<<endl; cin >> a; 
	cout << "Ingrese el numero 2: "<<endl; cin >> b;
	cout << "Ingrese el numero 3: "<<endl; cin >> c; 
	cout << "Ingrese el numero 4: "<<endl; cin >> d; 
	
	res4 = a + (b/(c-d));
	
	cout.precision(4);
	cout << "______________________________ " <<endl; 
	cout << "El valor del resultado 4 es: " << res4 <<endl; 

	return 0;
}

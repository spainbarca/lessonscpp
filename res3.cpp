#include <iostream>
using namespace std;

int main() {
	float a, b, c, d, e, f, res3 = 0; 
	
	cout << "Ingrese el numero 1 "<<endl; cin >> a; 
	cout << "Ingrese el numero 2: "<<endl; cin >> b;
	cout << "Ingrese el numero 3: "<<endl; cin >> c; 
	cout << "Ingrese el numero 4: "<<endl; cin >> d;
	cout << "Ingrese el numero 5: "<<endl; cin >> e; 
	cout << "Ingrese el numero 6: "<<endl; cin >> f; 
	
	res3= (a+(b/c))/(d+(e/f));
	
	cout.precision(4);
	cout << "______________________________ " <<endl; 
	cout << "El valor del resultado 3 es: " << res3 <<endl; 

	return 0;
}

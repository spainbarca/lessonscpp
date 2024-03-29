#include <iostream>
using namespace std;

int main() {
	float a, b, res1 = 0; 
	
	cout << "Ingrese el numero 1 "<<endl; cin >> a; 
	cout << "Ingrese el numero 2: "<<endl; cin >> b; 
	
	res1= (a/b) +1;
	
	cout.precision(4);
	cout << "______________________________ " <<endl; 
	cout << "El valor del resultado 1 es: " << res1 <<endl; 

	return 0;
}

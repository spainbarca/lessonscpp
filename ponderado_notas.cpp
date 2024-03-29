#include <iostream>
using namespace std;

int main() {
	float n1, n2, n3, pond = 0; 
	
	cout << "Ingrese la nota de practicas: "<<endl; cin >> n1; 
	cout << "Ingrese la nota de teoria: "<<endl; cin >> n2;
	cout << "Ingrese la nota de participacion: "<<endl; cin >> n3;
	
	n1 *=0.3;
	n2 *=0.6;
	n3 *=0.1;
	
	pond = n1+n2+n3;
	
	cout.precision(4);
	cout << "______________________________ " <<endl; 
	cout << "El ponderado de las notas es: " << pond <<endl; 

	return 0;
}

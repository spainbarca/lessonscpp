#include <iostream>
using namespace std;

int main() {
	int num, dato = 10;
	
	cout << "Ingrese el numero: "<<endl; cin >> num; 
	
	if(num == dato){
		cout << "______________________________ " <<endl; 
		cout << "El valor de número coincide con el de la PC"; 
	}else{
		cout << "______________________________ " <<endl; 
		cout << "El valor de número es otro"; 
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int num, dato = 10;
	
	cout << "Ingrese el numero: "<<endl; cin >> num; 
	
	if(num == dato){
		cout << "______________________________ " <<endl; 
		cout << "El valor de n�mero coincide con el de la PC"; 
	}else{
		cout << "______________________________ " <<endl; 
		cout << "El valor de n�mero es otro"; 
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int num;
	float res1 = 0; 
	
	cout << "Ingrese un número del 1-5 "<<endl; cin >> num;  
	cout << "______________________________ " <<endl; 
	
	switch(num){
		case 1:
			cout << "Es el número 1";
			break;
		case 2:
			cout << "Es el número 2";
			break;
		case 3:
			cout << "Es el número 3";
			break;	
		case 4:
			cout << "Es el número 4";
			break;	  
		case 5:
			cout << "Es el número 5";
			break;
		default:
			cout << "Es un número fuera del rango";
			break;	 		 
	}

	return 0;
}

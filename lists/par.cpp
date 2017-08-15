#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <cctype>

bool impar (int n);
bool par (int n);

int main () {

	int n;
	char controle;

	do {
		
		cout << "Informe o valor de n: ";
		cin >> n;

		if (par(n)) {
			cout << n << " eh um numero par." << endl;
		} else {
			cout << n << " eh um numero impar." << endl; 
		}

		cout << "Continuar (s/n)? ";
		cin >> controle;
		
		do {
			cout << "Continuar (s/n)? " ;
			cin >> controle;
			controle = toupper(controle);	
		} while (controle != 'S' and controle != 'N') {

	} while(controle == 'S');
}

bool par(int n) {
	if (n == 0) {
		return true;
	}
	else if (n > 0) {
		return impar(n-1);
	}
	else {
		return par(-n);
	}
}

bool impar(int n) {

	if (n == 0){
		return false;
	} else if(n > 0) {
		return par(n - 1);
	} else {
		return impar(-n);
	}
}

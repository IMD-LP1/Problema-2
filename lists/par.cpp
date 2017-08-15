#include <iostream>
using std::cout ;
using std::endl ;
using std::cin ;


bool impar (int n) ;
bool par (int n) ;



int main () {

	int n  ;
	char controle ('s') ;
	bool resultado ;


	while (controle != 'n') {
		
		cout << "Informe o valor de n: " ;
		cin >> n ;
		if (par(n)) {
			cout << n << " eh um numero par." << endl ;
		}
		else {
			cout << n << " eh um numero impar." << endl ; 
		}
		cout << "Continuar (s/n)? " ;
		cin >> controle ;
		while (controle != 's' && controle != 'n') {
			cout << "Continuar (s/n)? " ;
			cin >> controle ;	
		} 
	}
}

bool par (int n) {
	if (n == 0) {
		return true ;
	}
	else if (n > 0) {
		return impar(n-1) ;
	}
	else {
		return par(-n) ;
	}
}

bool impar (int n) {
	if (n == 0) {
		return false ;
	}
	else if (n > 0) {
		return par(n-1) ;
	}
	else {
		return impar (-n) ;
	}
}
#include <iostream>
using std::cout ;
using std::endl ;
using std::cin ;

#include <string>
using std::stoi ;
using std::string ;

/*
int fatorial(int n) {
	if (n == 0) {
		return 1 ;	
	}
	else {
		return (n * fatorial(n-1)) ; 
	}
}

int fatorial_verboso (string fat, int n) {
		
	if (n == 0) {	
		fat += "1" ;
		return 1 ;
	}
	else {
		fat += std::to_string(n) + " * " ;
		cout << fat << "fatorial(" << n-1 << ")"<< endl ;
		return (fat ,n * fatorial_verboso(fat, n-1)) ; 
	}

} */

int fatorial (bool cond , string fat, int n) {
	if (cond) {
		if (n == 0) {	
			fat += "1" ;
			return 1 ;
		}
		else {
			fat += std::to_string(n) + " * " ;
			cout << fat << "fatorial(" << n-1 << ")"<< endl ;
			return (cond,fat ,n * fatorial(cond,fat, n-1)) ; 
		}		
	}
	else {
		if (n == 0) {
			return 1 ;	
		}
		else {
			return (cond,fat,n * fatorial(cond,fat,n-1)) ; 
		}	
	}
}

int main (int argc, char *argv[]) {
	if (argc < 2) {
		int n , saida ;
		char s ;
		bool c ;		
		cout << "Informe o valor de n: " ;
		cin >> n ;
		cout << "Modo verboso (s/n)?" ;
		cin >> s ;		
		if (s != 's') {
			c = false ;		
		}
		else {
			c = true ;
		}
		cout << c << endl ;
		cout << "Fatorial("<< n << ") = " << fatorial(c,"=",n) << endl ; 	
			
	}
	else {
		int n (stoi(argv[1])) ;
		char s ;
		bool c ;		
		cout << "Modo verboso (s/n)?" ;
		cin >> s ;
		if (s != 's') {
			c = false ;		
		}
		else {
			c = true ;
		}
		cout << "Fatorial("<< n << ") = " << fatorial 
			(c,"=",n) << endl ;	
	}

	return 0 ;
}

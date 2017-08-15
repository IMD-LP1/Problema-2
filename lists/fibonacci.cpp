/**	@file fatorialCauda.cpp */
/** @Question 10 */
#include <iostream>
using std::cout ;
using std::endl ;
using std::cin ;



void fibDupla (int n , int& a , int& b) {
	
	if (n < 0) {
		cout << "O numero precisa ser maior do que zero." << endl ;
		exit (1) ;
	}
	else if (n == 1) {
		cout << b << endl ; ;
		return  ;
	}
	else  {
		int aux(a+b) ;
		//cout << aux << endl ;
		fibDupla(n-1, b , aux) ;
	}
}


int main() {
	int n , a(0) , b(1) ;

	cout << "Digite um numero " ;
	cin >> n ;

	cout << n << " Fibonacci: " ;
	fibDupla (n,a,b) ;

	return 0 ;

}

/**	@file fatorialCauda.cpp */
/** @Question 10 			*/
#include <iostream>
using std::cout ;
using std::endl ;
using std::cin ;



void fibDupla (int n, int& a, int& b) {
	
	int aux;
	
	if(n < 0) {
		cout << "O numero precisa ser maior do que zero." << endl ;
		exit(1);
	 } else if(n == 0) {
	 	b = a;
	} else {
		aux = a;
		a = b;
		b = a + aux;
		
		fibDupla(n - 1,a ,b) ;
	}
}


int main() {

	int n ,a ,b;
	
	a = 0;
	b = 1;

	cout << "Digite um numero ";
	cin >> n;

	fibDupla (n, a, b);
	cout <<"fib(" << n <<") = " << b << endl;

	return 0 ;

}

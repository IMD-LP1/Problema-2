/**
 *	@file fibonacci.cpp
 *	@program Calcula a posiçao de fibonacci dada pelo usuario
*/

#include <iostream>
using std::cout ;
using std::endl ;
using std::cin ;


/*
 *	@brief	funçao de fibonacci recursiva
 *  @param	n Posiçao de fibonacci que o usuario deseja
 *  @param	a Valor da Posiçao n-1 
 *  @param	b Valor da Posiçao n
*/
void fibDupla (int n , int& a , int& b) {
	
	if (n < 0) {
		cout << "O numero precisa ser maior do que zero." << endl ;
		exit (1) ;
	}
	else if (n == 1) {
		//cout << b << endl ; ;
		return  ;
	}
	else  {
		int aux(a+b) ;
		cout << aux << endl ;
		return fibDupla(n-1,  , aux) ;
	}
}

/*
 *	@brief Funçao principal
*/
int main() {
	int n , a(0) , b(1) ;

	cout << "Digite um numero " ;
	cin >> n ;

	fibDupla(n,a,b) ;
	cout << n << " Fibonacci: " ;
	cout << b << endl ;
	//fibDupla (n,a,b) ;

	return 0 ;

}

/**	@file fatorialCauda.cpp
 *	@program Calcula a posiçao de fibonacci dada pelo usuario
 *	@questao 10
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

	
	int aux;
	
	if(n < 0) {
		cout << "O numero precisa ser maior do que zero." << endl ;
		exit (1) ;
	}
	
	else if (n == 0){
		b = a ;
	}
	else if (n == 1) {
		
	}
	else  {
		int aux = a ;
		a = b ;
		b = a + aux ;
		return fibDupla(n-1, a , b) ;
	}
}

/*
 *	@brief Funçao principal
*/
int main() {
	int n ,a ,b;
	
	a = 0;
	b = 1;

	cout << "Digite um numero ";
	cin >> n;

	fibDupla (n, a, b);
	cout <<"fib(" << n <<") = " << b << endl;
}
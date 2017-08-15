#include <iostream>
using std::cout ;
using std::cin ;
using std::endl ;

int func_ackermann (int m, int n) {
	if (m == 0) {
		return	(n += 1) ;	
	}
	else if (m > 0 && n == 0) {
		return	func_ackermann(m-1,n) ;
	}
	else {
		return 	func_ackermann(m-1,func_ackermann(m,n-1)) ;
	}

}

int main () {
	
	char controle('s') ;	
	int m , n ;	


	while (controle != 'n') {
			
		cout << "Função de Ackermann A(m,n)" << endl ;
		cout << "Informe o valor de m: " ;
		cin >> m ;
		cout << "Informe o valor de n: " ;
		cin >> n ;
	
		cout << "A(" << m <<", " << n << ") = " << func_ackermann(m,n) << endl ;
		cout << "Continuar (s/n)? ";
		cin >> controle ;		
		while ( controle != 's' && controle != 'n') {
			cout << "Continuar (s/n)? ";
			cin >> controle ;		
		}			
	
	}	

	return 0 ;
}


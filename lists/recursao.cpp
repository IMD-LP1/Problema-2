#include <iostream>
#include <cstdlib>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string ;


int fatorial(int n) {
	
	if(n == 1) {
		return n;
	} else {
		return n * fatorial(n - 1);
	}
}

int fatorial_verboso (string fat , int n) {
	if(n == 1) {
		fat += '1' ;
		return n;
	} else {
		fat += std::to_string(n) + '*' ;
		cout << fat ;
		return n * fatorial(n - 1);
	}	
}


int main(int argc, char * argv[]) {
	
	int n, fat;
	char verb;
	if(argc == 2) {
		n = atoi(argv[1]);
		fat = fatorial(n);
	} else if(argc == 1) {
		cout << "Informe o valor de n: ";
		cin >> n;
		cout << "Modo verboso ?" ;
		cin >> verb ;
		if (verb == 's') {
			fat = fatorial_verboso("",n) ;
		}
		else {
			fat = fatorial(n);
		}
	} else {
		cout << "Erro!" << endl;
		exit(EXIT_FAILURE);
	}
	
	cout << "Fatorial(" << n << ") = " << fat << endl;
}

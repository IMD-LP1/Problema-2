/**	@file fatorial.cpp */
/** @Question 3 */
#include <iostream>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;

int fatorial(int n) {
	
	if(n == 1) {
		return n;
	} else {
		return n * fatorial(n - 1);
	}
}

int main(int argc, char * argv[]) {
	
	int n, fat;
	if(argc == 2) {
		n = atoi(argv[1]);
		fat = fatorial(n);
	} else if(argc == 1) {
		cout << "Informe o valor de n: ";
		cin >> n;
		fat = fatorial(n);
	} else {
		cout << "Erro!" << endl;
		exit(EXIT_FAILURE);
	}
	
	cout << "Fatorial(" << n << ") = " << fat << endl;

}

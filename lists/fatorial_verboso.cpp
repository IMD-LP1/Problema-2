#include <iostream>
#include <cstdlib>
#include <string>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::stoi;

int fatorial(int n) {

	if(n == 0) {
		return 1;
	} else {
		return n * fatorial(n - 1);
	}
}

int fatorial_verboso(string fat, int n) {

	if(n == 0) {
		cout << fat << "1" << endl;
		return 1;
	} else {
		fat += std::to_string(n) + " * ";
		cout << fat << "fatorial(" << n - 1 << ")" << endl;
		return n * fatorial_verboso(fat, n - 1);
	}
}

int main(int argc, char * argv[]) {

	int n, fat;
	string opcao;
	
	switch(argc) {
		case 1:
			cout << "Informe o valor de n: ";
			cin >> n;
			cout << "Modo verboso (s/n)? ";
			cin >> opcao;
			break;
		case 2:
			n = std::stoi(argv[1]);
			cout << "Modo verboso (s/n)? ";
			cin >> opcao;
			break;
		case 3:
			n = std::stoi(argv[1]);
			fat = fatorial_verboso(" = ",n);
			break;
		default:
			cout << "Erro!" << endl;
			exit(EXIT_FAILURE);
	}
	
	
	
	if(opcao == "N" or opcao == "n") {
		fat = fatorial(n);
	} else if(opcao == "S" or opcao == "s") {
		fat = fatorial_verboso(" = ",n);
	}

	cout << " = " << fat << endl;
}

/**
 *  @file ackermann.cpp
 *	@program Calcula a função de Ackermann
 */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <cctype>

/**
 *	@brief 		Função de Ackemann recursiva
 *	@details	Função de Ackermann recursivamente.
 *	@param 		m inteiro.
 * 	@param 		n inteiro
 */
int ackermann(int m, int n) {
	
	if(m == 0) {
		return n + 1;
	} else if(m > 0 and n == 0) {
		return ackermann(m - 1, 1);
	} else if(m > 0 and n > 0) {
		return ackermann(m - 1, ackermann(m, n - 1)); 
	} else {
		cout << "Erro, numero negativo!" << endl;
		exit(EXIT_FAILURE);
	}
	
}

/**
 * @brief Função principal do programa
 */
int main() {
	
	int m(0), n(0);
	char opcao;

	// leitura dos parametros da Funcao de Ackermann
	do {
		cout << "Função de Ackermann A(m,n)" << endl;
		cout << "Informe o valor de m: ";
		cin >> m;
		cout << "Informe o valor de n: ";
		cin >> n;

		// calculo e impressao dos resultados da Funcao de Ackermann
		cout << "A(" << m << ", " << n << ") = " << ackermann(m,n) << endl;

		
		do {
			cout << "Continuar (s/n)? ";
			cin >> opcao;
			opcao = toupper(opcao);
		} while (opcao != 'S' and opcao != 'N');

	} while (opcao != 'N');

}


int fatorial(bool x, string fat, int n) {
    if (x){
        if(n == 0) {
            cout << fat << "1" << endl;
            return 1;
        } else {
            fat += std::to_string(n) + " * ";
            cout << fat << "fatorial(" << n - 1 << ")" << endl;
            return n * fatorial(true,fat, n - 1);
        }
    }
    else {
        if(n == 1) {
		return n;
	} else {

		return n * fatorial(x,fat,n - 1);
	}
}
}




int main(int argc, char * argv[]) {

	int n;
	int x;
	string opcao;
	if(argc == 1) {
		cout << "Informe o valor de n: ";
		cin >> n;
		cout << "Modo verboso (s/n)? ";
		cin >> opcao;
		if(opcao == "S") {
            x = true;
			cout << "Fatorial(" << n << ")";
			fatorial(x," = ", n);
		} else if(opcao == "N") {
            x = false;
			cout << "Fatorial(" << n << ")";
			fatorial(x,opcao,n);
		} else {
			cout << "Erro!" << endl;
			exit(EXIT_FAILURE);
		}
	} else if(argc == 2) {
		n = std::stoi(argv[1]);
		cout << "Modo verboso (s/n)? ";
		cin >> opcao;
		opcao = opcao;
		if(opcao == "S") {
            x = true;
			cout << "Fatorial(" << n << ")";
			fatorial(x," = ", n);
		} else if(opcao == "N") {
            x = false;
			cout << "Fatorial(" << n << ")";
			fatorial(x,opcao,n);
		} else {
			cout << "Erro!" << endl;
			exit(EXIT_FAILURE);
		}

	} else if(argc == 3) {
	    x = true;
		n = std::stoi(argv[1]);
		cout << "Fatorial(" << n << ")";
		fatorial(x," = ", n);

	}

}


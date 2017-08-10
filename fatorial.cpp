#include <iostream>
#include <string>

using namespace std;
int fatorial (int n);
string modo_verboso(string texto,int n);


int main(int argc, char *argv[])
{


    int x;
    int fat;
    char opcao;
    string text;
    cout << "Modo verboso (s/n)?\n";
    cin >> opcao;
    if (opcao == 'n')
    {
    if (argc == 1){
    cout << "Digite o valor de x:\n";
    cin >> x;
    fat = fatorial(x);
   }
   else {
        x = stoi(argv[1]);
        fat = fatorial(x);
    }

    cout << "Fatorial(" << x <<") = " << fat << endl;
    }

    else
        modo_verboso(text,x);






}


int fatorial(int n)
{
    if (n == 0){
    return 1;
    }
    else
        return n*fatorial(n-1);

}

string modo_verboso(string texto,int n);
{

    int a = n;
    texto[0] = stoi(n);
    cout << "Fatorial (" << x << ") = "
    for(int i = 0; i < n; i++){
        texto[0]
    }
}

/**	@file fatorialCauda.cpp */
/** @Question */
#include <iostream>
using namespace std;

int fatorial( int n);
int fatorialIter ( int n, int cont);

int main()
{   
    int n;
    cout << "Digite o valor de n: \n";
    cin >> n;

    cout << "Fatorial (" << n << ")" << " = ";
    cout << "fatorialIter (" << n << "," << 1 << ")" << endl;
    cout << "= " << fatorial(n) << endl;

}

int fatorialIter ( int n, int cont)
{

    while (n != 0){
        cout << "fatorialIter (" << n-1 << ", " << n << " * " << cont << ")" << endl;
        cont = n*cont;
        n -=1;
    }
   
       return cont;
}


int fatorial( int n) {

    return fatorialIter(n,1);

}

#include<iostream>

using namespace std;

int soma(int valor) {
    return 2 + valor;
}

int main() {
    int valor1;
    cout << "Digite o valor a somar" << endl;
    cin >> valor1;
    cout << "O resultado é " << soma(valor1) << endl;
    return 0;
}

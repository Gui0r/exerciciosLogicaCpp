#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8"); 
    int A;

    cout << "Digite um número inteiro";
    cin >> A;

    if (A > 0 )
    {
        /* code */
    }
    
}

/*
 é um número inteiro positivo, sem zeros à esquerda, que é o mesmo se lido da esquerda para a direita ou da direita para a esquerda. Por exemplo, os números 11 e 65256 são palíndromos, mas os números 010 e 123 não são.*/
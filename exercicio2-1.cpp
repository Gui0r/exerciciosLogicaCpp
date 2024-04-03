#include <iostream>
#include <locale.h>

using namespace std;


int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8"); 

    int a, b;

    cout << "Digite um número: "; 
    cin >> a;

    cout << "Digite um segundo número: ";
    cin >> b;

    if(a > b){
        cout << "O número a é maior que b."; 
    }else if(a < b){
        cout << "O número a é menor que b.";
    }else{
        cout <<  "Os números a e b são iguais."; 
    }

}
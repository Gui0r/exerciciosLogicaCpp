#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8"); 

    int num1;

    cout << "Digite um numero inteiro: ";
    cin >> num1;

    if(num1 % 3 == 0 && num1 % 5 == 0){
        cout << "1";
    }else{
        cout << "0";
    }
}
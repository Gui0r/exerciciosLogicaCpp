#include <iostream>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int data;

    std::cout << "Digite um Ano para verificar se é bissexto: ";
    std::cin >> data;

    if (data % 400 == 0 || data % 4 == 0 || data % 100 != 0)
    {
        std::cout << "Seu ano é bissexto";
    }else{
        std::cout << "Seu ano não é bissexto";
    }
    
// (year % 400 == 0) 

}
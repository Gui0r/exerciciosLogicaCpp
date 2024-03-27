#include <iostream>
#include <locale.h>

    int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8"); 
    int a;

    setlocale(LC_ALL, "pt_BR.UTF-8");

    std::cout << "Digite um numero inteiro: ";

    std::cin >> a;

    if (a % 2 == 0 && a > 0)
    {
        std::cout << "Seu numero é par e positivo!"; 
    }else{
        std::cout << "Seu numero não é par e positivo!";
    }
    
    return 0;
}
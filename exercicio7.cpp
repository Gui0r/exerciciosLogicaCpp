#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int a;

    std::cout << "Digite um numero inteiro: ";
    std::cin >> a;

    if (a < 0) {
        std::cout << "Seu numero é negativo!" << std::endl;
    }else if(a == 0 || a > 0){
        std::cout << "Seu numero é positivo!" << std::endl;
    }
    

    return 0;
}

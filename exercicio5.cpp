#include <iostream>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    float C, F;

    std::cout << "Digite uma temperatuda em Celsius: ";
    std::cin >> C;

    F = (C * 9/5) + 32;

    std::cout << "Sua temperatura em Fahrenheit é: "  << F <<std::endl;

}
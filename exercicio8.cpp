#include <iostream> 
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int a, b, c;

    std::cout << "Digite o primeiro numero para verificar se podemos formar um triangulo: " << std::endl;   
    std::cin >> a;

    std::cout << "Digite o segundo numero: " << std::endl;   
    std::cin >> b;

    std::cout << "Digite o terceiro numero: " << std::endl;   
    std::cin >> c;

    if (a + b > c)
    {
        std::cout << "Seu numero é apropriado para um triangulo!" << std::endl;
        
    }else{
        std::cout << "Seu numero não é apropriado para um triangulo!" << std::endl;
    }
    
}
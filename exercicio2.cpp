#include <iostream>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int a;

    printf("Digite um numero inteiro: ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("Seu numero é par!");
    }else{
        printf("Seu numero não é par!");
    }
    
    return 0;

}






/*#include <iostream>

int main(){
    //Exercicio 1
    int a = 8;
    int b = 9;
    int c = 17;
    bool resultado = (a + b != c);

    printf("True or false?: %s\n", resultado ? "true" : "false");
   
    return 0;
}*/
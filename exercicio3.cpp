#include <iostream>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    float a, b, c;
    float media;

    printf("Digite o primeiro numero real: " );
    scanf("%f", &a);

    printf("Digite o segundo numero real: " );
    scanf("%f", &b);

    printf("Digite o terceiro numero real: " );
    scanf("%f", &c);

    media = (a + b + c) / 3;

    printf("Sua media é: %f", media);

    return 0;


}
#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8"); 
    int base, alt;
    float area;

    cout << "Digite a base desse triangulo: ";
    cin >> base;

    cout << "Digite a altura desse triangulo: ";
    cin >> alt;

    area = (base * alt) / 2;

    cout << "A área deste triangulo é: " << area <<endl;
}
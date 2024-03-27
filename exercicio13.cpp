#include <iostream>
#include <locale.h>

using namespace std;

int main(){

    int H, S;
    cout << "Quantidade de horas para converter a segundos: ";
    cin >> H;

    S = 3600 * H;

    cout << "Quantidade de segundos: " << S <<endl;

}
/*1 hora corresponde a 60 minutos × 60 = 3600 segundos.*/
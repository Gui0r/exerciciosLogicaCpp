#include <iostream>
#include <locale.h>
using namespace std;


int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8"); 
    int nota1, nota2, nota3;
    int peso1, peso2, peso3;
    int notaTotal;
    int mediaP;

    std::cout << "Digite sua primeira nota e seu peso separadas por espaço: ";
    cin >> nota1 >> peso1;

    std::cout << "Digite sua segunda nota e seu peso separadas por espaço: ";
    cin >> nota2 >> peso2;

    std::cout << "Digite sua terceira nota e seu peso separadas por espaço: ";
    cin >> nota3 >> peso3;


    notaTotal = ((nota1 * peso1)) / peso1 + ((nota2 * peso2)) / peso2 + ((nota3 * peso3)) / peso3;
    mediaP = notaTotal / 3;

    cout << "Sua nota final é:" << mediaP <<endl;
    if (mediaP >= 6)
    {
        cout << "você passou de ano!";
    }else{
        cout << "você reprovou de ano!";
    }
    



}


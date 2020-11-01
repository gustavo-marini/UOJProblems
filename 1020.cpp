#include <iostream>

using namespace std;

int main()
{
    int VALOR,DIAS,MESES,ANOS;

    cin >> VALOR;

    ANOS = VALOR / 365;

    VALOR = VALOR % 365;
    MESES = VALOR / 30;

    VALOR = VALOR % 30;
    DIAS = VALOR;

    cout << ANOS << " ano(s)\n";
    cout << MESES << " mes(es)\n";
    cout << DIAS << " dia(s)\n";

    return 0;
}
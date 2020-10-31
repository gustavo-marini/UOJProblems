#include <iostream>

using namespace std;

int main()
{
    int TOTAL,NOTAS,NOTACEM,NOTACINQUENTA,NOTAVINTE,NOTADEZ,NOTACINCO,NOTADOIS,NOTAUM;

    cin >> TOTAL;

    NOTAS = TOTAL;


    NOTACEM = NOTAS / 100;
    NOTAS = NOTAS - (NOTACEM * 100);

    NOTACINQUENTA = NOTAS / 50;
    NOTAS = NOTAS - (NOTACINQUENTA * 50);

    NOTAVINTE = NOTAS / 20;
    NOTAS = NOTAS - (NOTAVINTE * 20);

    NOTADEZ = NOTAS / 10;
    NOTAS = NOTAS -(NOTADEZ * 10);

    NOTACINCO = NOTAS / 5;
    NOTAS = NOTAS - (NOTACINCO * 5);

    NOTADOIS = NOTAS / 2;
    NOTAS = NOTAS - (NOTADOIS * 2);

    NOTAUM = NOTAS / 1;
    NOTAS = NOTAS - (NOTAUM * 1);


    cout << TOTAL << endl;
    cout << NOTACEM << " nota(s) de R$ 100,00\n";
    cout << NOTACINQUENTA << " nota(s) de R$ 50,00\n";
    cout << NOTAVINTE << " nota(s) de R$ 20,00\n";
    cout << NOTADEZ << " nota(s) de R$ 10,00\n";
    cout << NOTACINCO << " nota(s) de R$ 5,00\n";
    cout << NOTADOIS << " nota(s) de R$ 2,00\n";
    cout << NOTAUM << " nota(s) de R$ 1,00\n";

    return(0);
}
#include <iostream>

using namespace std;

int main()
{
    int NOTA100 = 0,NOTA50 = 0,NOTA20 = 0,NOTA10 = 0,NOTA5 = 0,NOTA2 = 0,MOEDA100 = 0,MOEDA50 = 0,MOEDA25 = 0,MOEDA10 = 0,MOEDA5 = 0,MOEDA1 = 0;
    double VALOR;
    cin >> VALOR;

    NOTA100 = (VALOR-NOTA100)/100;
    VALOR = VALOR - (NOTA100*100);

    NOTA50 = (VALOR-NOTA50)/50;
    VALOR = VALOR - (NOTA50*50);

    NOTA20 = (VALOR-NOTA20)/20;
    VALOR = VALOR - (NOTA20*20);

    NOTA10 = (VALOR-NOTA10)/10;
    VALOR = VALOR - (NOTA10*10);

    NOTA5 = (VALOR-NOTA5)/5;
    VALOR = VALOR - (NOTA5*5);

    NOTA2 = (VALOR-NOTA2)/2;
    VALOR = VALOR - (NOTA2*2);

    MOEDA100 = (VALOR-MOEDA100);
    VALOR = VALOR - MOEDA100;

    VALOR = VALOR*100;

    MOEDA50 = (VALOR-MOEDA50)/50;
    VALOR = VALOR - (MOEDA50*50);

    MOEDA25 = (VALOR-MOEDA25)/25;
    VALOR = VALOR - (MOEDA25*25);

    MOEDA10 = (VALOR-MOEDA10)/10;
    VALOR = VALOR - (MOEDA10*10);

    MOEDA5 = (VALOR-MOEDA5)/5;
    VALOR = VALOR-(MOEDA5*5);

    MOEDA1 = (VALOR-MOEDA1);
    VALOR = VALOR-MOEDA1;

    cout << "NOTAS:" << endl;
    cout << NOTA100 << " nota(s) de R$ 100.00" << endl;
    cout << NOTA50 << " nota(s) de R$ 50.00" << endl;
    cout << NOTA20 << " nota(s) de R$ 20.00" << endl;
    cout << NOTA10 << " nota(s) de R$ 10.00" << endl;
    cout << NOTA5 << " nota(s) de R$ 5.00" << endl;
    cout << NOTA2 << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:" << endl;
    cout << MOEDA100 << " moeda(s) de R$ 1.00" << endl;
    cout << MOEDA50 << " moeda(s) de R$ 0.50" << endl;
    cout << MOEDA25 << " moeda(s) de R$ 0.25" << endl;
    cout << MOEDA10 << " moeda(s) de R$ 0.10" << endl;
    cout << MOEDA5 << " moeda(s) de R$ 0.05" << endl;
    cout << MOEDA1 << " moeda(s) de R$ 0.01" << endl;

    return 0;
}
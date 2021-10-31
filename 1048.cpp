#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
cout << fixed << setprecision(2);


    double SALARIO,NOVO,REAJUSTE,PORCENTAGEM;


    cin >> SALARIO;


    if(SALARIO <= 400.00){
        PORCENTAGEM = (15.0 / 100);
    }

    else if(SALARIO <= 800.00){
        PORCENTAGEM = (12.0 / 100);
    }

    else if(SALARIO <= 1200.00){
        PORCENTAGEM = (10.0 / 100);
    }

    else if(SALARIO <= 2000.00){
        PORCENTAGEM = (7.0 / 100);
    }

    else if(SALARIO > 2000.00){
        PORCENTAGEM = (4.0 / 100);
    }

    REAJUSTE = SALARIO * PORCENTAGEM;

    cout << "Novo salario: " << SALARIO + (SALARIO * PORCENTAGEM) << endl;
    cout << "Reajuste ganho: " << REAJUSTE << endl;
    cout << fixed << setprecision(0);
    cout << "Em percentual: " << PORCENTAGEM * 100 << " %" << endl;

    return 0;
}
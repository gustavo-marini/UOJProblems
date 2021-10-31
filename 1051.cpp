#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    double VALOR,IMPOSTO;

    cin >> VALOR;

    if(VALOR < 2000.00){
        cout << "Isento\n";
    }
    else if(VALOR <= 3000.00){
        IMPOSTO = (VALOR - 2000.00) * 0.08;
        cout << "R$ " << IMPOSTO << endl;
    }
    else if(VALOR <= 4500.00){
        IMPOSTO = ((VALOR - 3000.00) * 0.18) + 80;
        cout << "R$ " << IMPOSTO << endl;
    }
    else if(VALOR > 4500.00){
        IMPOSTO = ((VALOR - 4500.00) * 0.28) + 350;
        cout << "R$ " << IMPOSTO << endl;
    }


    return 0;
}
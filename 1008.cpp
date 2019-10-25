#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
cout << fixed << setprecision(2);

    int NUMERO,HORAS;
    double VALPHORA,SALARIO;

    cin >> NUMERO;
    cin >> HORAS;
    cin >> VALPHORA;

    SALARIO = VALPHORA * HORAS;

    cout << "NUMBER = " << NUMERO << endl;
    cout << "SALARY = U$ " << SALARIO << endl;


    return 0;
}
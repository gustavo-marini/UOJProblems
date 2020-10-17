#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
cout << fixed << setprecision(2);

    int CODPEC1,CODPEC2,QUANPEC1,QUANPEC2;
    double VALPEC1,VALPEC2;

    cin >> CODPEC1;
    cin >> QUANPEC1;
    cin >> VALPEC1;
    cin >> CODPEC2;
    cin >> QUANPEC2;
    cin >> VALPEC2;

    cout << "VALOR A PAGAR: R$ " << (VALPEC1 * QUANPEC1) + (VALPEC2 * QUANPEC2) << endl;


    return 0;
}
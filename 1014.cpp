#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(3);

    int Km;
    double litros;

    cin >> Km;
    cin >> litros;

    cout << Km / litros << " km/l\n";


    return 0;
}
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(3);

    int TEMPO,VELMED;
    int DISTANCIA;
    double COMBUSTIVEL;

    cin >> TEMPO;
    cin >> VELMED;

    DISTANCIA = TEMPO * VELMED;
    COMBUSTIVEL = DISTANCIA / 12.0;

    cout << COMBUSTIVEL << endl;

    return 0;
}
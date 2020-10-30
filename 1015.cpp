#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    cout << fixed << setprecision(4);

    double X1,Y1,X2,Y2;
    double DISTANCIA;
    double X2X1,Y2Y1;

    cin >> X1;
    cin >> Y1;
    cin >> X2;
    cin >> Y2;

    X2X1 = (X2 - X1) * (X2 - X1);
    Y2Y1 = (Y2 - Y1) * (Y2 - Y1);

    DISTANCIA = sqrt(X2X1 + Y2Y1);

    cout << DISTANCIA << endl;

    return 0;
}
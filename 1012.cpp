#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    
    cout << fixed << setprecision(3);

    double A,B,C;
    double AREAPIT;
    double PI = 3.14159;
    double AREACIRCULO;
    double AREATRAP;
    double AREASQUARE;
    double AREARET;

    cin >> A;
    cin >> B;
    cin >> C;

    AREAPIT = (A * C) / 2.0;
    AREACIRCULO = PI * (C * C);
    AREATRAP = (A + B) * C / 2.0;
    AREASQUARE = (B * B);
    AREARET = (A * B);

    cout << "TRIANGULO: " << AREAPIT << endl;
    cout << "CIRCULO: " << AREACIRCULO << endl;
    cout << "TRAPEZIO: " << AREATRAP << endl;
    cout << "QUADRADO: " << AREASQUARE << endl;
    cout << "RETANGULO: " << AREARET << endl;

    return 0;
    
}
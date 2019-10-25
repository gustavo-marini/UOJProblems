#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(1);
    double A;
    double B;
    double C;
    double MEDIA2;

    cin >> A;
    cin >> B;
    cin >> C;
    MEDIA2 = ((A * 2) + (B * 3) + (C * 5)) / 10;

    cout << "MEDIA = " << MEDIA2 << endl;


    return 0;
}
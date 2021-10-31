#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(1);

    double A,B,C,AREA;

    cin >> A;
    cin >> B;
    cin >> C;

    AREA = (A + B) * C / 2;

    if((A < B + C) && (B < A + C) && (C < A + B)){
        cout << "Perimetro = " << A + B + C << endl;
    }
    else{
        cout << "Area = " << AREA << endl;
    }


    return 0;
}
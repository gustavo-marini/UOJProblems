#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
cout << fixed << setprecision(5);

    double A,B,C,B2;
    double DELTA,RAIZDELTA,MENOSB;
    double R1,R2;

    cin >> A;
    cin >> B;
    cin >> C;

    B2 = B * B;
    DELTA = B2 - 4 * A * C;
    RAIZDELTA = sqrt(DELTA);
    MENOSB = -B;

    R1 = (MENOSB + RAIZDELTA) / (2 * A);
    R2 = (MENOSB - RAIZDELTA) / (2 * A);

    if (A == 0){
        cout << "Impossivel calcular\n";
    }else if(DELTA <= -1){
        cout << "Impossivel calcular\n";
    }else{
        cout << "R1 = " << R1 << endl;
        cout << "R2 = " << R2 << endl;
    }


    return 0;
}
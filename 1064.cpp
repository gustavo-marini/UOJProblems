#include <iostream>

using namespace std;

int main()
{
    double POSITIVOS = 0;
    double A,B,C,D,E,F;
    double MEDIA = 0;

    cin >> A >> B >> C >> D >> E >> F;

    if(A > 0){
        POSITIVOS = POSITIVOS + 1;
        MEDIA = MEDIA + A;
    }
    if(B > 0){
        POSITIVOS = POSITIVOS + 1;
        MEDIA = MEDIA + B;
    }
    if(C > 0){
        POSITIVOS = POSITIVOS + 1;
        MEDIA = MEDIA + C;
    }
    if(D > 0){
        POSITIVOS = POSITIVOS + 1;
        MEDIA = MEDIA + D;
    }
    if(E > 0){
        POSITIVOS = POSITIVOS + 1;
        MEDIA = MEDIA + E;
    }
    if(F > 0){
        POSITIVOS = POSITIVOS + 1;
        MEDIA = MEDIA + F;
    }

    cout << POSITIVOS << " valores positivos\n";
    cout << MEDIA / POSITIVOS << endl;

    return 0;
}
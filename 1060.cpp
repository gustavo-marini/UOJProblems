#include <iostream>

using namespace std;

int main()
{
    double POSITIVOS = 0;
    double A,B,C,D,E,F;

    cin >> A >> B >> C >> D >> E >> F;

    if(A > 0){
        POSITIVOS = POSITIVOS + 1;
    }
    if(B > 0){
        POSITIVOS = POSITIVOS + 1;
    }
    if(C > 0){
        POSITIVOS = POSITIVOS + 1;
    }
    if(D > 0){
        POSITIVOS = POSITIVOS + 1;
    }
    if(E > 0){
        POSITIVOS = POSITIVOS + 1;
    }
    if(F > 0){
        POSITIVOS = POSITIVOS + 1;
    }

    cout << POSITIVOS << " valores positivos\n";

    return 0;
}
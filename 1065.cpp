#include <iostream>

using namespace std;

int main()
{
    double PARES = 0;
    int A,B,C,D,E,F;

    cin >> A >> B >> C >> D >> E;

    if(A%2 == 0){
        PARES = PARES + 1;
    }
    if(B%2 == 0){
        PARES = PARES + 1;
    }
    if(C%2 == 0){
        PARES = PARES + 1;
    }
    if(D%2 == 0){
        PARES = PARES + 1;
    }
    if(E%2 == 0){
        PARES = PARES + 1;
    }

    cout << PARES << " valores pares\n";

    return 0;
}
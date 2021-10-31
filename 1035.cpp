#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>

using namespace std;

int main()
{
    int A,B,C,D;
    int CD,AB;

    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;

    CD = C + D;
    AB = A + B;

    if ((B > C) && (D > A) && (CD > AB) && (C > 0) && (D > 0) && (A%2==0)){
        cout << "Valores aceitos\n";
    }else{
        cout << "Valores nao aceitos\n";
}


    return 0;
}
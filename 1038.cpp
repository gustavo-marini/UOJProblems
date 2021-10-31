#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>

using namespace std;

int main()
{
cout << fixed << setprecision(2);

    double QUANT;
    double CODIGO;
    double TOTAL;

    cin >> CODIGO >> QUANT;

    if(CODIGO == 1){
        TOTAL = QUANT * 4.00;
    }
    else if(CODIGO == 2){
        TOTAL = QUANT * 4.50;
    }
    else if(CODIGO == 3){
        TOTAL = QUANT * 5.00;
    }
    else if(CODIGO == 4){
        TOTAL = QUANT * 2.00;
    }
    else if(CODIGO == 5){
        TOTAL = QUANT * 1.50;
    }

    cout << "Total: R$ " << TOTAL << endl;

    return 0;
}
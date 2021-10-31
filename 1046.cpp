#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int INICIO,FIM,TOTAL,DIA1,DIA2;

    cin >> INICIO;
    cin >> FIM;
    0 <= TOTAL <= 24;

    if(INICIO>=FIM){
        TOTAL = 24 - INICIO + FIM;
    }
    else{
        TOTAL = FIM - INICIO;
    }

    cout << "O JOGO DUROU " << TOTAL << " HORA(S)\n";

    return 0;
}
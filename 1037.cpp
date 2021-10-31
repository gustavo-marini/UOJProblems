#include <iostream>

using namespace std;

int main()
{
    double X;

    cin >> X;

    if((X >= 0) && (X <= 25.0000)){
        cout << "Intervalo [0,25]\n";
    }
    else if((X >= 25.0001) && (X <= 50.0000)){
        cout << "Intervalo (25,50]\n";
    }
    else if((X >= 50.0001) && (X <= 75.0000)){
        cout << "Intervalo (50,75]\n";
    }
    else if((X >= 75.0001) && (X <= 100.0000)){
        cout << "Intervalo (75,100]\n";
    }
    else if(X >= 100.0001){
        cout << "Fora de intervalo\n";
    }
    else if(X <= 0.0001){
        cout << "Fora de intervalo\n";
    }

    return 0;
}
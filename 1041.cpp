#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout << fixed << setprecision(1);

    double X,Y;

    cin >> X;
    cin >> Y;

    if((X == 0) && (Y == 0)){
        cout << "Origem\n";
    }
    else if((X > 0) && (Y > 0)){
        cout << "Q1\n";
    }
    else if((X < 0) && (Y > 0)){
        cout << "Q2\n";
    }
    else if((X < 0) && (Y < 0)){
        cout << "Q3\n";
    }
    else if((X > 0) && (Y < 0)){
        cout << "Q4\n";
    }
    else if((X == 0) && (Y != 0)){
        cout << "Eixo Y\n";
    }
    else if((X != 0) && (Y == 0)){
        cout << "Eixo X\n";
    }


    return 0;
}
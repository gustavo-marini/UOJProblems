#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    int A, B, C, MAIORAB;

    cin >> A >> B >> C;

    MAIORAB = (A + B + abs(A - B)) / 2;
    MAIORAB = (MAIORAB + C + abs(MAIORAB - C)) / 2;

    cout << MAIORAB << " eh o maior\n";

    return 0;

}
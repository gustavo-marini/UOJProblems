#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    cout << fixed << setprecision(3);

    double VOLUME;
    double RAIO;
    double RAIO3;
    double PI = 3.14159;
    cin >> RAIO;

    RAIO3 = RAIO * RAIO * RAIO;
    VOLUME = (4.0 / 3) * PI  * RAIO3;

    cout << "VOLUME = " << VOLUME << endl;

    return 0;

}
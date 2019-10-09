#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
cout << fixed << setprecision(4);

    double area;
    double raio;
    double raio2;
    double PI = 3.14159;
    cin >> raio;

    raio2 = raio * raio;
    area = raio2 * PI;

    cout << "A="<< area << endl;

    return 0;
}
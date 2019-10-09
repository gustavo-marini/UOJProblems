#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(5);
    float A;
    float B;
    float MEDIA;

    cin >> A;
    cin >> B;
    MEDIA = ((A * 3.5) + (B * 7.5)) / 11;

    cout << "MEDIA = " << MEDIA << endl;


    return 0;
}
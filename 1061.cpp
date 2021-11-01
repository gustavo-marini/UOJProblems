#include <iostream>

using namespace std;

int main(){

    int di, hi, mi, si;
    int df, hf, mf, sf;
    string dia, d;
    int tsi, tsf;
    int ts;
    int W, X, Y, Z;

    cin >> dia; cin >> di;
    cin >> hi >> d >> mi >> d >> si;
    cin >> dia; cin >> df;
    cin >> hf >> d >> mf >> d >> sf;


    tsi = si + (mi * 60) + (hi * 3600) + (di * 86400);
    tsf = sf + (mf * 60) + (hf * 3600) + (df * 86400);

    ts = tsf - tsi;

    W = ts/86400;
    ts = ts%86400;
    X = ts/3600;
    ts = ts%3600;
    Y = ts/60;
    ts = ts%60;
    Z = ts;

    cout << W << " dia(s)" << endl;
    cout << X << " hora(s)" << endl;
    cout << Y << " minuto(s)" << endl;
    cout << Z << " segundo(s)" << endl;

return 0;
}

#include <iostream>

using namespace std;

int main()
{
    double A,B,C;

    cin >> A >> B >> C;

    /// "A" maior ///

    if((A > B) && (A > C) && (B > C)){
        cout << C << endl;
        cout << B << endl;
        cout << A << endl;
        cout << endl;
        cout << A << endl;
        cout << B << endl;
        cout << C << endl;
    }
    else if((A > B) && (A > C) && (C > B)){
        cout << B << endl;
        cout << C << endl;
        cout << A << endl;
        cout << endl;
        cout << A << endl;
        cout << B << endl;
        cout << C << endl;
    }

    /// "B" maior ///

    else if((B > A) && (B > C) && (A > C)){
        cout << C << endl;
        cout << A << endl;
        cout << B << endl;
        cout << endl;
        cout << A << endl;
        cout << B << endl;
        cout << C << endl;
    }
    else if((B > A) && (B > C) && (C > A)){
        cout << A << endl;
        cout << C << endl;
        cout << B << endl;
        cout << endl;
        cout << A << endl;
        cout << B << endl;
        cout << C << endl;
    }

    /// "C" maior ///

    else if((C > A) && (C > B) && (A > B)){
        cout << B << endl;
        cout << A << endl;
        cout << C << endl;
        cout << endl;
        cout << A << endl;
        cout << B << endl;
        cout << C << endl;
    }
    else if((C > A) && (C > B) && (B > A)){

        cout << A << endl;
        cout << B << endl;
        cout << C << endl;
        cout << endl;
        cout << A << endl;
        cout << B << endl;
        cout << C << endl;
    }

    return 0;
}
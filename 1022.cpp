#include <iostream>

using namespace std;

int mdc(int m, int n) {
    if(m == 0 && n == 0)
        return -1;

    if(m < 0) m = -m;
    if(n < 0) n = -n;

    int r;
    while(n) {
        r = m % n;
        m = n;
        n = r;
    }
    return m;
}

int main()
{
    int n,n1,d1,n2,d2,num,den;
    char div,op;

    cin >> n;

    while(n--){
        cin >> n1 >> div >> d1 >> op >> n2 >> div >> d2;
        if(op=='+'){
            num=(n1*d2+n2*d1);
            den=(d1*d2);
        }
        else if(op=='-'){
            num=(n1*d2-n2*d1);
            den=(d1*d2);
        }
        else if(op=='*'){
            num=(n1*n2);
            den=(d1*d2);
        }
        else if(op=='/'){
            num=(n1*d2);
            den=(n2*d1);
        }
        cout << num << "/" << den << " = ";
        int gdc=mdc(num,den);
        cout << num/gdc << "/" << den/gdc << endl;
    }

    return 0;
}

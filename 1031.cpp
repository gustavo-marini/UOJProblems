#include <iostream>

using namespace std;

bool flag;

int crise(int reg, int salto)
{
    if(reg==1) return 0;
    if(flag){
        flag=false;
        return (crise(reg-1,salto)+reg)%reg;
    }
    return (crise(reg-1,salto)+salto) % reg;
}

int main()
{
    int n;

    while(cin >> n){
        if(n==0) break;
        flag=true;
        int salto=0,restou=0;
        while(restou!=13){
            restou=crise(n-1,salto)+2;
            salto++;
        }
        cout << salto-1 << endl;
    }

    return 0;
}
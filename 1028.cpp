#include <iostream>

using namespace std;

int main()
{
    int n,f1,f2,aux,result;

    cin >> n;

    while(n--){
        cin >> f1 >> f2;
        if(f1>f2){
            aux=f1;
            f1=f2;
            f2=aux;
        }
        result=f2%f1;
        while(result!=0){
            f2=f1;
            f1=result;
            result=f2%f1;
        }
        cout << f1 << endl;
    }

    return 0;
}
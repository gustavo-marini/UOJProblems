#include <iostream>

using namespace std;

int chamadas=0;

int fibonacci(int n){
    chamadas++;
    if(n<2){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
    int x,n;

    cin >> x;

    while(x--){
        cin >> n;
        cout << "fib(" << n << ") = " << chamadas-1 << " calls = " << fibonacci(n) << endl;
        chamadas=0;
    }

    return 0;
}
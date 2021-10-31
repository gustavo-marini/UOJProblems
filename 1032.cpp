#include <iostream>
#include <vector>
#include <cmath>
#include <string.h>

using namespace std;

vector<int> primo;

bool ehPrimo(int n)
{
    double raiz = sqrt(n);
    for(int i=3;i<=raiz;i+=2){
        if(n%i==0) return false;
    }
    return true;
}

int i=0;
int josephus(int n, int k=0)
{
    if(n==1) return 0;
    else{
        int k = primo[i];
        i++;
        return (josephus(n-1,k)+k)%n;
    }
}

int main() {
    int n;

    int qtd=0;
    for(int i=3;i<50000;i+=2){
        if(ehPrimo(i)) primo.insert(primo.begin()+qtd++,i);
    }
    primo.insert(primo.begin(),2);

    while(cin >> n and n){
        cout << josephus(n)+1 << endl;
        i=0;
    }

    return 0;
}
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;

int buscaBin(int n, int v[], int ini, int fim)
{
    int meio = (ini+fim)/2;

    if(ini>fim) return -1;
    else if(n<v[meio]) return buscaBin(n,v,ini,meio-1);
    else if(n>v[meio]) return buscaBin(n,v,meio+1,fim);
    else if(n==v[meio]){
        while(v[meio-1]==n) meio--;
        return meio;
    }
}

int main()
{
    int n,q,caso=0;

    //freopen("entrada.in", "r", stdin);

    while(cin >> n >> q){
        if(n==0 and q==0) break;
        int v[n+1];
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        sort(v,v+n);
        int consulta;
        cout << "CASE# " << ++caso << ":\n";
        while(q--){
            cin >> consulta;
            if(buscaBin(consulta,v,0,n-1)>=0) cout << consulta << " found at " << buscaBin(consulta,v,0,n-1)+1 << endl;
            else cout << consulta << " not found\n";
        }
    }

    return 0;
}
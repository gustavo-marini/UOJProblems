#include <iostream>
#include <map>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int n,qtd,cons,caso=0;
    bool flag=false;

    while(cin >> n){
        if(n==0) break;
        double totalHab=0, totalConsumo=0;

        if(flag) cout << endl;

        map<int,int> cidade;
        map<int,int>::iterator it;
        while(n--){
            cin >> qtd >> cons;
            cidade[cons/qtd]+=qtd;
            totalHab+=qtd;
            totalConsumo+=cons;
        }
        cout << "Cidade# " << ++caso << ":\n";
        int i=0;
        for(it=cidade.begin();it!=cidade.end();it++){
            if(i++==cidade.size()-1) cout << it->second << "-" << it->first << endl;
            else cout << it->second << "-" << it->first << " ";
        }
        cout.precision(2);
        cout << "Consumo medio: " << fixed << floor(totalConsumo/totalHab*100)/100 << " m3." << endl;
        flag=true;
    }

    return 0;
}

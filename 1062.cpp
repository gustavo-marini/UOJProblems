#include <iostream>
#include <cstdio>
#include <stack>
#include <string.h>
#include <vector>

using namespace std;

void limpaPilha(stack<int> &p)
{
    while(p.size()!=0) p.pop();
}

void mostraPilha(stack<int> &p, string s = " ")
{
    stack<int> pAux = p;
    while(p.size()!=0){
        cout << p.top() << s;
        p.pop();
    }
    cout << endl;
    p = pAux;
}

int main()
{
    int n;

    #ifndef ONLINE_JUDGE
        freopen("entrada.in", "r", stdin);
    #endif // ONLINE_JUDGE

    while(scanf("%d", &n)!=EOF and n){
        int v[1000];
        v[0]=1;
        bool flag=false;
        stack<int> p1, p2;
        while(v[0]!=0){
            vector<int> mostra;
            memset(v,0,sizeof v);
            for(int i=0; i<n; i++){
                scanf("%d", &v[i]);
                if(v[i]==0){
                    flag=true;
                    break;
                }
            }

            int j=0;
            for(int i=1;i<=n;i++){
                p1.push(i);
                while(p1.size()>0 and p1.top()==v[j]){
                    p1.pop();
                    j++;
                }
            }

            if(flag){
                flag=false;
                printf("\n");
                break;
            }

            printf(p1.empty()? "Yes\n": "No\n");

            limpaPilha(p1);
            limpaPilha(p2);
        }
    }

    return 0;
}

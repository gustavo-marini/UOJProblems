#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    string s;

    cin >> n;
    getchar();

    while(n--){
        getline(cin,s);
        int tam=s.size();
        for(int i=0;i<tam;i++){
            if(s[i]>=65 and s[i]<=90){
                s[i]+=3;
            }
            else if(s[i]>=97 and s[i]<=122){
                s[i]+=3;
            }
        }
        for(int i=tam-1;i>=0;i--){
            if(i<=tam/2 and tam%2!=0){
                s[i]-=1;
            }
            else if(i<=tam/2-1 and tam%2==0){
                s[i]-=1;
            }
        }
        for(int i=tam-1;i>=0;i--){
            cout << s[i];
        }
        cout << endl;
    }

    return 0;
}

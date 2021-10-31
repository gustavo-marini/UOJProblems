#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double a, b, c;
    int aux;

    cin >> a >> b >> c;

    if(b > a && b > c){
         aux = a;
         a = b;
         b = aux;
    } else if (c > b && c > a){
         aux = a;
         a = c;
         c = aux;
    }

    if (a >= b + c){
       cout << "NAO FORMA TRIANGULO" << endl;
    } else {

        if (pow(a, 2) == pow(b, 2) + pow(c, 2)){
           cout << "TRIANGULO RETANGULO" << endl;
        } else if (pow(a, 2) > pow(b, 2) + pow(c, 2)){
           cout << "TRIANGULO OBTUSANGULO" << endl;
        } else if (pow(a, 2) < pow(b, 2) + pow(c, 2)){
           cout << "TRIANGULO ACUTANGULO" << endl;
        }

        if (a == b && b == c && c == a){
            cout << "TRIANGULO EQUILATERO" << endl;
        } else if (a == b || a == c || b == c){
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }

    return 0;
}
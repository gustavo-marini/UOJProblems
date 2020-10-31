#include <iostream>

using namespace std;

int main()
{
    int N,HORAS,MINUTOS,SEGUNDOS;

    cin >> N;


    HORAS = N / 3600;

    MINUTOS = (N - (HORAS * 3600)) / 60;

    SEGUNDOS = N - (HORAS * 3600) - (MINUTOS * 60);


    cout << HORAS << ":" << MINUTOS << ":" << SEGUNDOS << endl;

    return(0);
}
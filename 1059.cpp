#include <iostream>

using namespace std;

int main()
{
    int PARES = 2;

    for(PARES=2;PARES<=100;PARES++)
    {
        if(PARES%2 == 0)
            cout << PARES << endl;
    }
    return 0;
}
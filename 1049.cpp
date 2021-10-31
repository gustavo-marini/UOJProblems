#include <iostream>

using namespace std;

int main()
{
    string A,B,C;

    cin >> A;
    cin >> B;
    cin >> C;

    if((A == "vertebrado") && (B == "ave") && (C == "carnivoro")){
        cout << "aguia\n";
    }
    else if((A == "vertebrado") && (B == "ave") && (C == "onivoro")){
        cout << "pomba\n";
    }
    else if((A == "vertebrado") && (B == "mamifero") && (C == "onivoro")){
        cout << "homem\n";
    }
    else if((A == "vertebrado") && (B == "mamifero") && (C == "herbivoro")){
        cout << "vaca\n";
    }

    else if((A == "invertebrado") && (B == "inseto") && (C == "hematofago")){
        cout << "pulga\n";
    }
    else if((A == "invertebrado") && (B == "inseto") && (C == "herbivoro")){
        cout << "lagarta\n";
    }
    else if((A == "invertebrado") && (B == "anelideo") && (C == "hematofago")){
        cout << "sanguessuga\n";
    }
    else if((A == "invertebrado") && (B == "anelideo") && (C == "onivoro")){
        cout << "minhoca\n";
    }


    return 0;
}
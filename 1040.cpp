#include <iostream>
#include <iomanip>>

using namespace std;

int main()
{
    cout << fixed << setprecision(1);
    double NOTA1,NOTA2,NOTA3,NOTA4,MEDIA,EXAME,MEDIAFINAL;

    cin >> NOTA1;
    cin >> NOTA2;
    cin >> NOTA3;
    cin >> NOTA4;

    MEDIA = ((NOTA1 * 2.0) + (NOTA2 * 3.0) + (NOTA3 * 4.0) +(NOTA4 * 1.0)) / 10;
    cout << "Media: " << MEDIA << endl;

    if(MEDIA > 7.0){
        cout << "Aluno aprovado.\n";
    }
    else if(MEDIA < 5.0){
        cout << "Aluno reprovado.\n";
    }
    else
    {
        cout << "Aluno em exame.\n";

    cin >> EXAME;
    cout << "Nota do exame: " << EXAME << endl;

    MEDIAFINAL = (MEDIA + EXAME) / 2.0;

    if(MEDIAFINAL >= 5){
        cout << "Aluno aprovado.\n";
        cout << "Media final: " << MEDIAFINAL << endl;
    }
    else if(MEDIAFINAL < 5){
        cout << "Aluno reprovado.\n";
        cout << "Media final: " << MEDIAFINAL << endl;
    }
}


    return 0;
}
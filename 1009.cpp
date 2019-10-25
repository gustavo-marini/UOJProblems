#include <stdlib.h>
#include <stdio.h>

int main()
{
    char name[1000];
    double fs,SOLD,TOTAL;


    double X = 0.15;
    scanf("%s %lf %lf", &name, &fs, &SOLD);
    TOTAL = fs + (SOLD*X);
    printf("TOTAL = R$ %.2lf\n", TOTAL);
    return 0;
}

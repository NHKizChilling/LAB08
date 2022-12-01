#include <stdio.h>
#include <stdlib.h>

int input();
int factorial(int k);

int main()
{
    int k;
    k = input();
    printf("Ket qua la: %d", factorial(k));
    return 0;
}

int input()
{
    int k;
    do 
    {
        system("cls");
        printf("Nhap so: ");
        scanf("%d", &k);
    } while ( k < 0 );
    return k;
}

int factorial(int k)
{
    int p = 1;
    for ( int i = 1; i <= k; i++ )
        p *= i;
    return p;
}
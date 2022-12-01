#include <stdio.h>
#include <stdlib.h>

int input();
int sum(int n);

int main()
{
    int n;
    n = input();
    printf("Ket qua la: %d", sum(n));
    return 0;
}

int input()
{
    int n;
    do 
    {
        system("cls");
        printf("Nhap so nguyen duong: ");
        scanf("%d", &n);
    } while ( n < 0 );
    return n;
}

int sum(int n)
{
    int sum = 0;
    for ( int i = 1; i <= n; i++ )
        sum += i;
    return sum;
}
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
    int digit;
    do
    {
        digit = n % 10;
        sum += digit;
        n = n / 10;
    } while ( n > 0 );
    return sum;
}
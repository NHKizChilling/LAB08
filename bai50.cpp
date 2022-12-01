#include <stdio.h>
#include <stdlib.h>

double fibo( int n );

int main()
{
    int n;
    do 
    {
        system("cls");
        printf("Nhap so: ");
        scanf("%d", &n);
    } while ( n < 1 );
    printf("Ket qua la: %lf", fibo(n));
    return 0;
}

double fibo(int n)  
{
    int t1 = 1,
        f = 1,
        t2 = 1;
    for ( int i = 3; i <= n; i++ )
    {
        f = t1 + t2;
        t1 = t2;
        t2 = f;
    }
    return f;
}
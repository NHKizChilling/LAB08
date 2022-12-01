#include <stdio.h>
#include <stdlib.h>

int gcd( int a, int b );
int lcm( int a, int b );

int main()
{
    int a,b;
    do
    {
        system("cls");
        printf("Nhap a: ");
        scanf("%d", &a);
        printf("Nhap b: ");
        scanf("%d", &b);
    } while ( a <= 0 || b <= 0 );    
    printf("Uoc chung lon nhat la: %d\n", gcd(a,b) );
    printf("Boi chung nho nhat la: %d", lcm(a,b) );
    return 0;
}

int gcd( int a, int b )
{
    do
    {
        if ( a > b )
            a -= b;
        else 
            b -= a;
    } while ( a != b );
    return a;
}

int lcm( int a, int b )
{
    return a*b / gcd(a,b);
}

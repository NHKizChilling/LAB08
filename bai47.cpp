#include <stdio.h>
#include <stdlib.h>

int input();
void print(int n);

int main()
{
    int n;
    n = input();
    print(n);
    return 0;
}

int input()
{
    int n;
    do 
    {
        system("cls");
        printf("Nhap so nguyen duong lon hon 2: ");
        scanf("%d", &n);
    } while ( n < 2 );
    return n;
}

void print(int n)
{
    int count;
    for ( int i = 2; i <= n; i++ )
    {
        count = 0;
        for ( int j = 1; j <= i; j++ )
        {
            if ( i % j == 0 )
            count++;
        }
        if ( count == 2) 
        {
            printf("%d ",i);
        }
    }
}
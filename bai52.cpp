#include <stdio.h>
#include <stdlib.h>

void printMinMaxDigits(int n);

int main()  
{
    int n;
    do
    {
        system("cls");
        printf("Nhap so: ");
        scanf("%d", &n);
    } while ( n < 0 );
    printMinMaxDigits(n);
    return 0;
}

void printMinMaxDigits(int n)
{
    int digit;
    int min, max;
    digit = n % 10;
    n = n / 10;
    min = digit;
    max = digit;
    do 
    {
        digit = n % 10;
        n = n / 10;
        if ( min > digit )
        {
            min = digit;
        }
        if ( max < digit )
            max = digit;
    } while ( n > 0 );
    printf("Chu so nho nhat la: %d\n", min );
    printf("Chu so lon nhat la: %d", max );
}
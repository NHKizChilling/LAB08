#include <stdio.h>
#include <math.h>

int main()
{
    double a;
    printf("Nhap so: ");
    scanf("%lf", &a );
    double result;
    result = sqrt( a );
    printf("Ket qua la: %.2lf", result);
    return 0;
}
#include <stdio.h>
#include <math.h>

int main()
{
    int a,b;
    int result;
    printf("Nhap so: ");
    scanf("%d", &a);
    printf("Nhap so mu: ");
    scanf("%d", &b);
    result = pow(double(a), double(b));
    printf("Ket qua la: %d", result);
    return 0;
}
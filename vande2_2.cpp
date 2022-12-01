#include <stdio.h>
#include <math.h>

int main()
{
    double x1, x2, y1, y2;
    double length;
    printf("Nhap A(x;y): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Nhap B(x;y): ");
    scanf("%lf %lf", &x2, &y2);
    length = sqrt( pow( x1 - x2, 2) + pow( y1 - y2, 2) );
    printf("Do dai vecto la: %lf", length);
    return 0;
}
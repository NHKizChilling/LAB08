#include <stdio.h>
#include <stdlib.h>

int getRelPos( double x, double y, double r );

int main()
{
    double x, y, r;
    int result;
    do
    {
        system("cls");
        printf("Nhap ban kinh r(r>0): ");
        scanf("%lf", &r);
    } while ( r < 0);
    printf("Nhap A(x;y): ");
    scanf("%lf %lf", &x, &y);
    result = getRelPos(x,y,r);
    if ( result == 1)
        printf("The point is in the circle");
    else if ( result == 0 )
        printf("The point is on the circle");
    else 
        printf("The point is out of the circle");
    return 0;
}

int getRelPos( double x, double y, double r )
{
    double d2 = x*x + y*y;
    double r2 = r*r;
    if ( d2 < r2 )
        return 1;
    else if ( d2 == r2 )
        return 0;
    else 
        return -1;
}
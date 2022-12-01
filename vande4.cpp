#include <stdio.h>
#include <math.h>

double vecto(int x1, int x2, int y1, int y2);
void area_of(int a, int b, int c);

int main()
{
    double x1, x2, y1, y2;
    printf("Nhap A(x;y): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Nhap B(x;y): ");
    scanf("%lf %lf", &x2, &y2);

    int a,b,c;
    printf("Nhap cac canh tam giac: ");
    scanf("%d %d %d", &a, &b, &c );
    
    printf("Do dai vecto la: %.2f\n", vecto(x1,x2,y1,y2));
    area_of(a,b,c);
    return 0;
}

double vecto(int x1, int x2, int y1, int y2)
{
    double length;
    length = sqrt( pow( x1 - x2, 2) + pow( y1 - y2, 2) );
    return length;
}

void area_of(int a, int b, int c)
{
    float p,s;
    if ( a>= b + c || b >= a + c || c >= a + b )
        printf("Ba canh vua nhap khong phai 3 canh cua tam giac");
    else 
    {
        p=float(a+b+c)/2;
        s= sqrt(p*(p-a)*(p-b)*(p-c));
        printf("Dien tich tam giac la: %.2f", s);
    }
}

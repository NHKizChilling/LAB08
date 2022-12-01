#include <stdio.h>
#include <stdlib.h>

int input();
void sort(int mode);
void main47();
void main48();
void main49();
void main50();
void main51();
void main52();

int main()
{
    int mode;
    mode = input();
    sort(mode);
    return 0;
}

int input()     // * Input chọn chế độ
{
    int mode;
    do 
    {
        system("cls");
        printf("=====MENU=====\n");
        printf("1:Primer\n");
        printf("2.validDate\n");
        printf("3.getRelPos\n");
        printf("4.Fibonacci\n");
        printf("5.GCD & LCm\n");
        printf("6.Min & Max\n");
        printf("7.Thoat\n");
        printf("==============");
        printf("\nChon che do: ");
        scanf("%d", &mode);
    } while ( mode <0 || mode > 7);
    return mode; 
}

void sort(int mode)     // * Chọn chế độ
{
    switch (mode)
    {
    case 1: main47();
        break;
    case 2: main48();
        break;
    case 3: main49();
        break;
    case 4: main50();
        break;
    case 5: main51();
        break;
    case 6: main52();
        break;
    case 7:
        printf("Thoat chuong trinh");
        break;
    }
}

void main47()   // * Bài 47 
{
    int n;
    do 
    {
        system("cls");
        printf("Nhap so nguyen duong lon hon 2: ");
        scanf("%d", &n);
    } while ( n < 2 );
    int count;
    printf("Cac so nguyen to la: ");
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

// * Bài 48
void feb(int d, int m, int y)
{
    if ( y % 4 == 0 && y % 100 != 0 || y % 400 == 0 )
    {
        if ( d > 0 && d <= 29 )
            printf("%d/%d/%d la hop le", d, m, y);
        else 
            printf("Khong hop le"); 
    } else 
    {
       if ( d > 0 && d <= 28 )
            printf("%d/%d/%d la hop le", d, m, y);
        else 
            printf("Khong hop le");  
    }
}
void others( int d, int m, int y)
{
    switch (m)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        if ( d > 0 && d <= 31 )
            printf("%d/%d/%d la hop le", d, m, y);
        else 
            printf("Khong hop le");
        break;
    case 4: case 6: case 9: case 11:
        if ( d > 0 && d < 31 )
            printf("%d/%d/%d la hop le", d, m, y);
        else 
            printf("Khong hop le");
        break;
    }
}
void main48()     // *  Main bài 48
{
    system("cls");
    int d,m,y;
    printf("Nhap ngay: ");
    scanf("%d", &d);
    printf("Nhap thang: ");
    scanf("%d", &m);
    printf("Nhap nam: ");
    scanf("%d", &y);
    if ( d < 1 || m < 1 && m > 12 || y < 1 )
        printf("Khong hop le");
    else 
    {
        if ( m == 2 )
        feb(d,m,y);
    else
        others(d,m,y);
    }
}

// * Bài 49
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
void main49()      // * Main bài 49
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
}

// * Bài 50
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
void main50()       // * Main Bài 50
{
    int n;
    do 
    {
        system("cls");
        printf("Nhap so: ");
        scanf("%d", &n);
    } while ( n < 1 );
    printf("Ket qua la: %.2lf", fibo(n));
}

// * Bài 51
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
void main51()   // * Main bài 51
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
}

// * Bài 52
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
void main52()   // * Main bài 52
{
    int n;
    do
    {
        system("cls");
        printf("Nhap so: ");
        scanf("%d", &n);
    } while ( n < 0 );
    printMinMaxDigits(n);
}

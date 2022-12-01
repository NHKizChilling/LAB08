#include <stdio.h>
#include <stdlib.h>

void feb(int d, int m, int y);
void others(int d, int m, int y);
void sort(int d, int m, int y);

int main()
{
    system("cls");
    int d,m,y;
    printf("Nhap ngay: ");
    scanf("%d", &d);
    printf("Nhap thang: ");
    scanf("%d", &m);
    printf("Nhap nam: ");
    scanf("%d", &y);
    sort(d,m,y);
    return 0;
}

void sort(int d, int m, int y)
{
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

void others(int d, int m, int y)
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
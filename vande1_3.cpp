#include <stdio.h>

int main()
{
   char c;
   unsigned char c1;
   int i;
   unsigned int i1;
   printf("Kich thuoc cua bien:\n");
   printf("char: %d\n", sizeof(c));
   printf("unsigned char: %d\n", sizeof(c1));
   printf("int: %d\n", sizeof(i));
   printf("unsigned int: %d", sizeof(i1));
    return 0;
}
#include<stdio.h>

int main()
{
    double a = 123.45; double b = -1234.56; char *ptr; int decpt, sign; gcvt(a, 5, ptr); printf("a value=%s\n", ptr); ptr = gcvt(b, 6, ptr); printf("b value=%s\n", ptr);
    return 0;
}
#include <stdio.h>

int main()
{
    int i = 10;
    int j = -10;
    int k = +10;

    signed int A = 10;      //1st bit - 0       usable - 31
    signed int B = -10;     //1st bit - 1
    signed int C = +10;     //1st bit - 0

    unsigned int X = 10;    // usable bit - 32
    unsigned int Y = +10;   // usable bit - 32
    unsigned int Z = -10;   // modifier assignd bfore th datatype and th valu which is assigned to it is whole respomsible ofr programmer

    printf("%d\n",X);
    printf("%d\n",Y);
    printf("%d\n",Z);
    return 0;
}
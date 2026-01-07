#include <stdio.h>

int main()
{
    int i = 10;
    short int j = 20;
    long int k = 30;

    printf("Size of integer is : %lu \n",sizeof(i));    // lu = long unsigned   // 4
    printf("Size of Short integer is : %lu \n",sizeof(j));                      // 2
    printf("Size of Long integer is : %lu \n",sizeof(k));                       // 8

    return 0;
}
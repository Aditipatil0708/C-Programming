#include <stdio.h>

int main()
{
    int Arr[4] = {10, 20, 30, 40}; 

    printf("Arr : %lu\n",Arr);              // 100
    printf("&Arr : %lu\n",&Arr);            // 100
    printf("&(Arr[0] : %lu\n",&(Arr[0]));   // 100
    //printf("&Arr++ : %lu\n",&Arr++); error
    printf("(&Arr) + 1 : %lu\n",(&Arr) + 1); //120


    return 0;
}

#include <stdio.h>

int main()
{
    double Arr[] = {10.0, 20.0, 30.0, 40.0};

    printf("Size of Arr :  %lu \n",sizeof(Arr));  // 32

    Arr++; // in all langs we cannt update base address of Array, because the compiler is only knowing base of array nothing else if we update that value compiler will have nothing.
            // Base address is always constant we cant update.

    return 0;
}

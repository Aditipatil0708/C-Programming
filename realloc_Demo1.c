//Increase the memory

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *Arr = NULL;


    // Step 1 :  Allocate the memory
    Arr = (int*)malloc(5 * sizeof(int));                // 20
    

    //Step 2 : use the memory

    Arr = (int *)realloc(Arr,10*sizeof(int));           // 40

    //Step 3 : Free the mnory

    free(Arr);

    return 0;
}

// case1,2,3, memmory bhetnar nhi ani Arr null honar ahe ti pn janar nhmaum dusra pointer ghya . pn recnt os la asa hot nhi

//navin 40 nhi magat ae total 40 pahile adhiche 20consider karun
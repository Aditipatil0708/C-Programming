#include <stdio.h>

int main()
{
    int iNo1 = 10;
    const int iNo2 = 20;

    iNo1++;     //iNo1 = iNo1 + 1;
    iNo2++;     //iNo2 = iNo2 + 1;   Addition honar assign nhi honar karan const ahe ERROR
    iNo2 = 30;  //ERROR



    return 0;

}
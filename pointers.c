#include<stdio.h>
#include<stdlib.h>
int main()
{
    
int num = 10;
printf("%p \n", &num);  // printing address

int *pNum = &num;   // storing address
printf("%p \n", pNum);   // printing address
printf("%d \n", *pNum);   // printing value for that address

    return 0;
}
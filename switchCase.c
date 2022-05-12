#include<stdio.h>
#include<stdlib.h>
int main()
{
    
    char myGrade = 'A';
    switch(myGrade){
        case 'A':
            printf("You Pass\n");
            break;
        case 'F':
            printf("You fail\n");
            break;
        default:
            printf("Invalid grade\n");
    }

    return 0;
}
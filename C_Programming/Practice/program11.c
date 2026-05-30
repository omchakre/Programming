/*
    Start
        Accept number as No
        if No is complately divisible by 2
            then print even
        otherwise
            print odd
    Stop

    Start
        Accept number as No
        Divide No by 2
        if remainder is 0
            then print as Even
        otherwise 
            print as odd
    Stop
*/

#include<stdio.h>

int main()
{
    int iValue = 0;
    int iRemainder = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRemainder = iValue % 2;

    if(iRemainder == 0)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }

    return 0;
}
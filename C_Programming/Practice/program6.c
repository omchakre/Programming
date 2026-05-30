/*
    Algorithm
    Start
        Accept First Number As no1
        Accept Second Number As no2
        Perform Addition of no1 and no2
        Display the Result
    Stop
*/

#include<stdio.h>

int main()
{
    // variable creation with default values
    float i = 0.0f, j = 0.0f , k = 0.0f;

    printf("Enter First Number: \n");
    scanf("%f",&i);

    printf("Enter Second Number: \n");
    scanf("%f",&j);

    k = i + j;

    printf("Addition is : %f\n",k);

    return 0;
}
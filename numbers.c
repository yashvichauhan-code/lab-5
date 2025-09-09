//WAP to enter numbers till the user wants. At the end, it should display the count of positive, negative, and Zeroes entered.
#include<stdio.h>
int main()
{
    int positive= 0, negative = 0, zero = 0;
    int num;
    char ans = 'y';
    while(ans=='y' || ans=='Y')
    {
        printf("enter a number: ");
        scanf("%d", &num);
        if (num>0)
        {
            positive++;
        }
        else if (num<0)
        {
            negative++;
        }
        else if (num==0)
        {
            zero++;
        }
        printf("do you want to continue? y/n: ");
        scanf(" %c", &ans);
    }
    printf("Positive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Zeroes: %d\n", zero);
    return 0;
}
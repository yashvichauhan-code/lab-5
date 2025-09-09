#include<stdio.h>
int main()
{
    int num=1,i,j,k;
    for(i=0; i<=3; i++)
    {
        for(j=0; j<=i; j++)
        {
            printf("%d", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}
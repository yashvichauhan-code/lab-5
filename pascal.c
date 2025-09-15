#include<stdio.h>
int main()
{
    int num=1,i,j,k,n;
    printf("enter the number of rows");
    scanf("%d",&n);
    for(i=0; i<n; i++)
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
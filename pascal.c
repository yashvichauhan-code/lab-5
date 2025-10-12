#include<stdio.h>
int main()
{
    int num=1,i,j,k,n,c,l;
    printf("enter the number of rows");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            printf("   ");
        }
        for (k=0;k<=i;k++){
            c=1;
        }
        for (int l= 0; l< j; l++)
                c=c*(i - l)/(l +1);
            printf("%4d",c);
        printf("\n");
    }
    return 0;
}
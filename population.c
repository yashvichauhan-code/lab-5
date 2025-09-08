#include<stdio.h>
int main()
{
    int p=100000, r=10;
    for(int i=9; i>=1; i--)
    {
        p= p/1.1;
        printf("population at %d years is %d\n", i, p);
    }
    return 0;
}
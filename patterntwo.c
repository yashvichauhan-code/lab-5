/*
    1
   1 1
  1 2 1
 1 3 3 1
*/
#include <stdio.h>
int main(){
    int n, num;
    printf("enter number of rows: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=i; j<n; j++){
            printf(" ");
        }
        for(int k=1; k<=i; k++){
            if (i==1 || k==1){
                num=1;
            }
            else {
                num=num*(i-k+1)/(k-1);
            }
            printf("%2d",num);
        }
        printf("\n");
        }
    return 0;
}
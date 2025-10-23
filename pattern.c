/*
   1
  2 3
 4 5 6
 */
#include <stdio.h>
int main(){
   int n, num=1;
   printf("enter number of rows: ");
   scanf("%d", &n);
   for (int i=1; i<=n; i++){
      for (int j=i; j<n; j++){
         printf(" ");
      }
      for (int k=1; k<=i; k++){
         printf("%d ", num);
         num++;
      }
      printf("\n");
   }
   return 0;
}
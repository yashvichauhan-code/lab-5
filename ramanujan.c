#include <stdio.h>
int main(){
    int a,b,c,d,s1,s2;
    for(a=1; a<=20; a++){
        for(b=1;b<=20;b++){
            for(c=1;c<=20;c++){
                for(d=1;d<=20;d++){
                    if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
                        s1= a*a*a + b*b*b;
                        s2= c*c*c + d*d*d;
                    }
                    if(s1==s2){
                        printf("%d is a ramanujan number.\n",s1);
                    }
                }
            }
        }
    }
    return 0;
}
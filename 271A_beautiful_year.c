#include<stdio.h>
int main(){
    int n,a,b,c,d,i;
    scanf("%d",&n);
    while(1){
        n++;
        i=n;
        a=n%10;
        n=n/10;
        b=n%10;
        n=n/10;
        c=n%10;
        n=n/10;
        d=n%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            printf("%d\n",i);
            break;
        }
        n=i;
    }
return 0;
}

#include<stdio.h>
int main(){
    int t,i,j,flag=0;
    scanf("%d",&t);
    j=t;
    if(j==1) flag=1;
    for(i=1;i<t;i++){
        if((i*(i+1)/2)==j){
            flag=1;
            break;
        }
    }
    if(flag) printf("YES\n");
    else printf("NO\n");

    return 0;
}
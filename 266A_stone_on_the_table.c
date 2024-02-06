#include<stdio.h>
int main(){
    int n,i,count=0;
    scanf("%d",&n);
    char str[n];
    for(i=0;i<n;i++){
        scanf("%s",&str[i]);
    }
    for(i=0;i<n-1;i++){
        if(str[i]==str[i+1]) count++;
    }
    printf("%d\n",count);




return 0;
}

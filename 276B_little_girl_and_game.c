#include<stdio.h>
int main(){
    char ch[1001];
    scanf("%s",&ch);

    int i=0;
    int count=0;

    for(i=0;ch[i]!='\0';i++){
        count++;
    }

    if(count%2==0) printf("Second\n");
    else printf("First\n");
    


    return 0;
}
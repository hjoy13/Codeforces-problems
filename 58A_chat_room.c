#include<stdio.h>
int main(){
    char s[105];
    scanf("%s",&s);
    int l=strlen(s);

    char s1[]="hello";
   
    int i,j=0,flag=0;
    for(i=0;i<l;i++){
        if(s[i]==s1[j]){
            j++;
            flag++;
        }
    }
    
    if(flag==5) printf("YES\n");
    else printf("NO\n");

    return 0;
}
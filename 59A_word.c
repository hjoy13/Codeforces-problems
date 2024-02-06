#include<stdio.h>
int main(){
    char ch[100];
    gets(ch);
    int low=0;
    int upp=0;
    int i=0;

    for(i=0;ch[i]!='\0';i++){
        if(ch[i]>='A' && ch[i]<='Z'){
            upp++;
        }
        else if(ch[i]>='a' && ch[i]<='z'){
            low++;
        }
    }
    
    if(upp==low) puts(strlwr(ch));
    else if(upp>low) puts(strupr(ch));
    else puts(strlwr(ch));
    
    return 0;
}
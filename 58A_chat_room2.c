#include<stdio.h>
int main(){
    char s[105];
    scanf("%s",&s);

    int i,flag=0;
    for(i=0;i!='\0';i++){
        if(s[i]=='h'){
            if(s[i]=='e'){
                if(s[i]=='l'){
                    s[i]='\0';
                    if(s[i]=='l'){
                        if(s[i]=='o'){
                            flag=1;
            }
            }
            }
            }
        }
    }
    if(flag==1) printf("Yes\n");
    else printf("No\n");

    return 0;
}

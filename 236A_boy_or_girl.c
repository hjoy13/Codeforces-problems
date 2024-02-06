#include<stdio.h>
int main(){
    char s[100];
    int len,i,count=0;
    gets(s);
    len=strlen(s);
    int hash[128]={0};

    for(i=0;i<len;i++){
        hash[s[i]]=1;
    }
    for(i=0;i<128;i++){
        count+=hash[i];
    }
    

   
    if(count%2==0) printf("CHAT WITH HER!\n");
    else printf("IGNORE HIM!\n"); 


    return 0;
}

/*#include<stdio.h>

int count_unique_char(char* str) {

	int hash[128] = { 0 };
	int i, c = 0;

	for (i = 0; i < strlen(str); ++i) {
	
		hash[str[i]] = 1;
	}

	for (i = 0; i < 128; ++i) {
		c += hash[i];
	}

	return c;

}

int main() {

	char str[300];

	printf("Enter String: ");
	gets(str);

	printf("Number of Unique Characters in String: %d", count_unique_char(str));

}*/
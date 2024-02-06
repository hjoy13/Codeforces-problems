#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    char ch[n+1];
    cin>>ch;
    for(int i=0; i<t; i++){
        for(int j=0; ch[j]!='\0'; j++){
            if(ch[j]=='B' && ch[j+1]=='G'){
                ch[j]='G';
                ch[j+1]='B';
                j++;
            }
        }
    }
    cout<<ch<<endl;

}
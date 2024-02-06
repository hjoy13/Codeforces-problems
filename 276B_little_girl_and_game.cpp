#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int count[26]={0},odd=0,even=0;

    for(int i=0; i<s.size(); i++){
        count[s[i]-'a']++;
    }

    for(int i=0; i<26; i++){
        if(count[i]%2!=0) odd++;
        
    }

    if((odd==0) || (odd==1) || (odd%2)) cout<<"First"<<endl;
    else cout<<"Second"<<endl;





    return 0;
}
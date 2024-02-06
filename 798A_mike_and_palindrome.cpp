#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int count=0,n=s.size();
    
    for(int i=0; i+i<n; i++){
        if(s[i]!=s[n-i-1]) count++;
        
    }

    if((count==1) || (count<=1 && (n%2!=0))) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


    return 0;
}
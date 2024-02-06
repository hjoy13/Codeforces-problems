#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,a,b;

    cin>>n;
    while(n--){
        cin>>a>>b;
        if(a<b) swap(a,b);
        

        if(a==b) cout<<4*a*a<<endl;
        else if(b==1) cout<<a*a<<endl;
        else cout<<4*b*b<<endl;
     
    
    }
}
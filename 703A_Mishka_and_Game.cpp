#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b,c1=0,c2=0;
    cin>>n;
    while(n--){
        cin>>a>>b;
        if(a>b) c1++;
        else if(a<b) c2++;
    }
    if(c1>c2) cout<<"Mishka";
    else if(c2>c1) cout<<"Chris";
    else cout<<"Friendship is magic!^^";


    return 0;
}
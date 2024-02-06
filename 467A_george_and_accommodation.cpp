#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,a,b,c=0;
    cin>>n;

    while(n--){
        cin>>a>>b;
        if(a<=(b-2)){
            c++;
        } 
        
    }

    cout<<c;


    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){

    long long x,n;
    cin>>n;

    while(n--){
        cin>>x;
        if(x<=2) cout<<"0"<<endl;
        else{
            if(x%2==0) cout<<(x/2)-1<<endl;
            else cout<<x/2<<endl;
        }
    }
    

    return 0;
}
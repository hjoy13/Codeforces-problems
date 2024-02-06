#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long x;

    while(n--){
        cin>>x;
        if(x%2==0) cout<<(x/2)<<endl;
        else cout<<(x/2)+1<<endl;
    }


    return 0;
}
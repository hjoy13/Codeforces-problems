#include<bits/stdc++.h>
using namespace std;

bool is_prime(int n){
    for(int i=2; i<n; i++){
        if(n%i==0){
            return 0;
            break;
        }
    }
    return 1;
}


int main(){
    int p,q;
    cin>>p>>q;
    int n=p+1,l=1;
    while(l==1){
        int a =is_prime(n);
        if(a==1) l=0;
        else n++;
    }
    if(q==n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

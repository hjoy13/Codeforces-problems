#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n--){
        int m;
        cin>>m;
        int arr[m];
        long long sum=0;
        bool odd=false;
        bool even=false;
        for(int i=0; i<m; i++){
            cin>>arr[i];
            sum+=arr[i];
            if(arr[i]%2==0) even=true;
            else odd=true;

        }

        if((sum%2!=0) || (even & odd)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

        sum=0;
    
    }



    return 0;
}
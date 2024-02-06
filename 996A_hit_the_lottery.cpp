#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,sum=0;
    cin>>n;
    int  i=0;
    int arr[5]={100,20,10,5,1};

    while(n!=0){
        sum+=n/arr[i];
        n=n%arr[i];
        i++;
    }

    cout<<sum<<endl;




    return 0;
}
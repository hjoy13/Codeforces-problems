#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n+1];

    if(n%2) cout<<"-1"<<endl;
    else{
        for(int i=1; i<=n; i++){
            arr[i]=i;
        }
        for(int i=1; i<=n-1; i++){
            swap(arr[i],arr[i+1]);
            i++;
        }
        for(int i=1; i<=n; i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
}
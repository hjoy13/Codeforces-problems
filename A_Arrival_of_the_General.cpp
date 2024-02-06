#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n],mx=0,mn=101,maxi,mini;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]>mx){
            mx=arr[i];
            maxi=i;
        }
        if(arr[i]<=mn){
            mn=arr[i];
            mini=i;
        } 
    }
    if(maxi>mini) mini++;
    cout<<maxi-1+n-mini<<endl;   



}
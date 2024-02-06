#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0,count=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        if(arr[i]!=-1) sum+=arr[i];
        else if (arr[i]==-1 && sum>0) sum--;
        else count++;
            

      
        
    }

    cout<<count<<endl;


    return 0;
}
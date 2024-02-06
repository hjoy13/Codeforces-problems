#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,c=1;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[j]==c) {
                cout<<j+1<<" ";
                c++;
                break;
            }
        }
        
            
            
        
        
    }

    return 0;
}
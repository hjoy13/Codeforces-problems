#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n--){
    int arr[4],max,count=0;
        for(int i=0; i<4; i++){
            cin>>arr[i];
            max=arr[0];
    }

    for(int i=0; i<4; i++){
        if(max<arr[i]) count++;
    }

    cout<<count<<endl;
    }
    

    return 0;
}
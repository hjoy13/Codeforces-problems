#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n--){
        long long a;
        cin>>a;
        long long arr[a];

        for(int i=0; i<a; i++){
            cin>>arr[i];
        }

        int max=arr[0];
        int index;
       

        

        for(int i=0; i<a; i++){
            if(arr[i]>=max) {
                max=arr[i];
                index=i;
            }
            
        }
         int smax;
         if(max==arr[0]) smax=-1;
         else smax=arr[0];

       

        for(int i=0; i<a; i++){
            if(arr[i]<=max && i!=index && smax<=arr[i]){
                smax=arr[i];

            }
        }

        

  

        for(int i=0; i<a; i++){
            if(arr[i]==max) cout<<arr[i]-smax<<" ";
            else cout<<arr[i]-max<<" ";
        }
        cout<<endl;

    }


    return 0;
}
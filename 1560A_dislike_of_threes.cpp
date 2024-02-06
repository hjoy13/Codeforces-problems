#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n--){
       int x,i;
       cin>>x;
       for(i=1; ; i++){
            if(i%3==0 || i%10==3){
                continue;
            } 
            if(--x==0){
                cout<<i<<endl;
                break;
            }
       }
      
       
       
    }


    return 0;
}
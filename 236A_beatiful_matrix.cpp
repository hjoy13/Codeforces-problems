#include<bits/stdc++.h>
using namespace std;

int main(){
    int ar[5][5],k,l;

    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cin>>ar[i][j];
            if(ar[i][j]==1){
                k=i-2;
                l=j-2;
            }
        }
    }
    
    if(k==0 && l==0) cout<<"0"<<endl;
    else cout<<abs(k)+abs(l)<<endl;
return 0;
}
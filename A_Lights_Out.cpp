#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[3][3],i,j;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cin>>a[i][j];
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(a[i][j]%2) a[i][j]=0;
            else a[i][j]=1;
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cout<<a[i][j];
        }cout<<endl;
    }
}
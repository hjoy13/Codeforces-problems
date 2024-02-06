#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    int ar[100][100],sum=0,sum1=0,sum2=0;
    for(int i=0; i<a; i++){
        for(int j=0; j<3; j++){
            cin>>ar[i][j];
        }
        sum+=ar[i][0];
        sum1+=ar[i][1];
        sum2+=ar[i][2];
    }
    if(sum==0 && sum1==0 && sum2==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}

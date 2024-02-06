#include<bits/stdc++.h>
using namespace std;



int main(){

vector<int>vp(100001);
vector<int>pp(100001);
int n,i,j;
cin>>n;
vector<int>mA(n+1);
for(i = 1, j=n; i<=n,j>=1; i++,j--){
    cin>>mA[i];
    vp[mA[i]]=i;
    pp[mA[i]]=j;
}

int m;
cin>>m;
long long v=0,p=0;

for(int i = 1; i<=m; i++){
    int a;
    cin>>a;
    v+=vp[a];
    p+=pp[a];
}

cout<<v<<" "<<p<<endl;


return 0;
}
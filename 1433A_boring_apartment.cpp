#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n--){
        string s;
        cin>>s;

        int x=s.size();

        cout<<10*(s[0]-'0'-1)+x*(x+1)/2<<endl;



    }


    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--){
        int x,count=0;
        cin>>x;
        string s;
        cin >> s;

        for(int i=0; i<x; i++){
            if(s[i] == 'Q') count++;
            else count--;
            if(count<0) count=0;
        }

        if(count==0) cout<< "Yes"<<endl;
        else cout<< "No"<<endl; 



    }


    return 0;
}
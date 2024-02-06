#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    

    while(n--){
        int a;
        cin>>a;
        string s;
        cin>>s;
        int max='a';
       for(int i=0; i<s.size(); i++){
            if((s[i])>=max) max=s[i];
        }
        cout<<max-'a'+1<<endl;
        max='a';



    }



    return 0;
}
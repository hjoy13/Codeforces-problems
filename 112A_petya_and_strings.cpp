#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1;
    int i=0;
    while(s1[i] != '\0')
    {
        if (s1[i] >= 'A' && s1[i] <= 'Z')
            s1[i] += 32;
        i++;
    }
   cin>>s2;
   i=0;
   while(s2[i] != '\0')
    {
        if (s2[i] >= 'A' && s2[i] <= 'Z')
            s2[i] += 32;
        i++;
    }

    if(s1!=s2){
        if(s1>s2) cout<<"1"<<endl;
        else cout<<"-1"<<endl;
    }
    else cout<<"0"<<endl;

   return 0;
}


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,x;
    cin>>n;
    string a;
    while(n--)
    {
        cin>>a;
        x=a.size();
     
        if(x>10)
        {
            cout<<a[0]<<x-2<<a[x-1]<<endl;
        }
        else
        {
            cout<<a<<endl;
        }
    }    
        

    
return 0;
}

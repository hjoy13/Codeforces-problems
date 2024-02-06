#include<bits/stdc++.h>
using namespace std;

int main(){
    map <string,int> face;

    face["Tetrahedron"] = 4;
    face["Cube"] = 6;
    face["Octahedron"] = 8;
    face["Dodecahedron"] = 12;
    face["Icosahedron"] = 20;

    int sum=0,n;
    cin>>n;

    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        sum+=face[s];
    }

    cout<<sum<<endl;

    
return 0;

}
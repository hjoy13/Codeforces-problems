#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    double sum=0;
    cin >> x;
    double arr[x];
    
    for(int i=0; i<x; i++){
        cin >> arr[i];
        sum=sum+(arr[i]/100);
        
    }

    cout <<(sum/x)*100<< endl;


    return 0;
}
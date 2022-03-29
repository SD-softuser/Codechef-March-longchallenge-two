#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; 
    cin>>t;
    while(t--){ 
        int x,y,a,b; 
        cin>>x>>y>>a>>b; 
        int count = 2;   
        if((x==a||x==b)&&(y==a||y==b)){ 
            count=0;
        }
        else if(x==a||x==b){ 
            count--;
        } 
        else if(y==a||y==b){ 
            count--;
        } 
        else{ 
            count==2; 
        } 
        cout<<count<<endl;
    }
    return 0;
}
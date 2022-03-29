#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a,b,c,x; 
    cin>>a>>b>>c>>x; 
    if(x==a||x==b||x==c){ 
        cout<<"YES"<<endl; 
    } 
    else{ 
        cout<<"NO"<<endl;
    }
    return 0;
}
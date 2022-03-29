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
        int s, x=1,y; 
        cin>>s; 
        y=-x-s;
        cout<<y<<endl;
    }
    //anathor implimentation = (s+1)*(-1);
    return 0;
}
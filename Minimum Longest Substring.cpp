#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define rep(n) for(int i=0;i<n;i++)
string times(string s, int n){ 
    string str=""; 
    rep(n){ 
        str = str+s;
    } 
    return str;
}
int count(string a, int n, char ch){ 
    int cnt = 0; 
    rep(n){ 
        if(a[i]==ch){ 
            cnt++;
        }
    } 
    return cnt; 
}
void solve(){ 
    int n, divi,ones,remo,zc,oc,zeros;
    string a,s="",t="",t1,t2; 
    cin>>n>>a;   
    zc = count(a,n,'0'); 
    oc = count(a,n,'1');

    if(zc<oc){ 
        s = times("0",zc)+times("1",oc); 
        divi = zc+1; 
        ones = oc/divi; 
        remo = oc%divi; 
        t1 = times("1",ones+1)+"0"; 
        t2 = times("1",ones)+"0"; 
        rep(remo){ 
            t = t +t1; 
        }
        rep(divi-remo){ 
            t = t+t2;  
        }
        t.pop_back();
    }
    else{ 
        s = times("1",oc)+times("0",zc);
        divi = oc+1; 
        zeros = zc/divi; 
        remo = zc%divi; 
        t1 = times("0",zeros+1)+"1"; 
        t2 = times("0",zeros)+"1"; 
        rep(remo){ 
            t = t+t1;
        }
        rep(divi-remo){ 
            t=t+t2;
        } 
        t.pop_back(); 
    }
    cout<<s<<endl;
    cout<<t<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; 
    cin>>t; 
    while(t--){ 
        solve();   
    }
    return 0;
}
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
        int arr[4]; 
        for(int i=0; i<4; i++){ 
            cin>>arr[i]; 
        } 
        sort(arr, arr+4); 
        int a, b; 
        a = (arr[0]+arr[2])/2;
        b = arr[2]-(a);
        if((a/b)==arr[1] && (a*b)==arr[3]){ 
            cout<<a<<" "<<b<<endl;
        } 
        else{ 
            a=(arr[1]+arr[3])/2; 
            b=arr[3]-(a);
            if((a/b)==arr[0] && (a*b)==arr[2]){ 
                cout<<a<<" "<<b<<endl;
            } 
            else{ 
                a=(arr[1]+arr[2])/2; 
                b=arr[2]-(a);
                if((a/b)==arr[0] && (a*b)==arr[3]){ 
                    cout<<a<<" "<<b<<endl;
                } 
                else{ 
                    a=(arr[0]+arr[3])/2; 
                    b=arr[3]-(a); 
                    if((a/b)==arr[1] && (a*b)==arr[2]){ 
                        cout<<a<<" "<<b<<endl;
                    }
                    else{ 
                        cout<<"-1 -1"<<endl;
                    }
                 }
            }
        }
    }
    return 0;
}
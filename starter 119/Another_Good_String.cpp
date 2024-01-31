#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define mod 1000000007

//......There'll be a day,I'll be loved,I'll be admired and they'll respect me......
 
 
void nimit() {
    
    ll n,q;
    string s;
    cin>>n>>q>>s;
    ll ans=1;
    ll maxi=1;
    
    for(int i=1;i<n;i++){
        if(s[i-1]==s[i]){
            ans++;
            maxi=max(maxi,ans);
        }
        else{
            ans=1;
        }
    }
    cout<<maxi<<" ";
    for(int i=n;i<(n+q);i++){
        char c;
        cin>>c;
        s+=c;
        if(s[i-1]==s[i]){
            ans++;
            maxi=max(maxi,ans);
        }
        else{
            ans=1;
        }
        cout<<maxi<<" ";
    }
    cout<<endl;
}
 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
           
        nimit();
    
    }
 
  return 0;
}
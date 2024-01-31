#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define mod 1000000007

//......There'll be a day,I'll be loved,I'll be admired and they'll respect me......
 
 
void nimit() {
    
    ll n,k;
    cin>>n>>k;
    vector<ll>arr(n);
    for(ll i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    ll mini=INT_MAX;
    for(int i =0;i<arr.size();i++) {
        if(arr[i]>=k){
            mini=min(mini,arr[i]%k);
        }
    }
    if(mini!=INT_MAX){
        cout<<mini<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
    
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
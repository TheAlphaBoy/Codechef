#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define mod 1000000007

//......There'll be a day,I'll be loved,I'll be admired and they'll respect me......
 
 
void nimit() {
    
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto & it : v){
        cin>>it;
    }
    sort(v.begin(),v.end());
    int avg=0;
    int mini = INT_MAX;
    int cnt=0;
    for(int i=n-1;i>=0;--i){
        mini=min(mini,v[i]);
        ++cnt;
        avg=max(avg,mini*cnt);
    }
    cout<<avg<<endl;
    
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
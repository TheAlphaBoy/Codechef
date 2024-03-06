#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define mod 1000000007

//......There'll be a day,I'll be loved,I'll be admired and they'll respect me......
 
 
void nimit() {
    
    int n;
    cin>>n;
    ll x=n/2;
    ll Tsum = x*(x+1);
    if(n%2==1){
        Tsum += (n/2)+1;
        cout<<Tsum<<endl;
    }
    else{
        cout<<Tsum<<endl;
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
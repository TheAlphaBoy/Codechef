#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define mod 1000000007

//......There'll be a day,I'll be loved,I'll be admired and they'll respect me......
 
 
void nimit() {
    
    int x;
    cin>>x;
    int gift_val=1;
    int budget=x;
    for(int i=0;i<7;i++){
        if(gift_val>budget){
            cout<<"no"<<endl;
            return;
        }
        budget -= gift_val;
        gift_val *=2;
    }
    cout<<"yes"<<endl;
    
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
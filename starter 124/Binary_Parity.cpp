#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define mod 1000000007

//......There'll be a day,I'll be loved,I'll be admired and they'll respect me......
 
 
void nimit() {
    
    int num;
    cin>>num;
    int cnt = 0;
    while (num>0) {
        num &= (num - 1);
        cnt++;
    }
    if (cnt % 2) {
        cout << "odd"<<endl;
    } 
    else {
        cout << "even"<<endl;
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
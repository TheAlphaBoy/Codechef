#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define mod 1000000007

//......There'll be a day,I'll be loved,I'll be admired and they'll respect me......
 
 
void nimit() {
    ll int n, m, x, y, l;
    cin >> n >> m >> x >> y >> l;

    ll int right = m - y;
    right = right / l;
    ll int r_ans = 1;
    r_ans += right;
    ll int left = y - 1;
    left = left / l;
    r_ans += left;

    ll int col = 1 + (n - x) / l + (x - 1) / l;
    ll int ans = r_ans * col;
    cout << ans << endl;
    
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
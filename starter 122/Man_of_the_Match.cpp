#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define mod 1000000007

//......There'll be a day,I'll be loved,I'll be admired and they'll respect me......
 
 
void nimit() {
    
    vector<pair<int,int>>performance(22);
    for(int i=0;i<22;++i){
        int run,wkt;
        cin>>run>>wkt;
        performance[i]=make_pair(run,wkt);
    }
    int ans=-1;
    int max_score=INT_MIN;
    for(int i=0;i<22;++i){
        int Tscore=1*performance[i].first + 20*performance[i].second;
        if(Tscore>max_score){
            max_score=Tscore;
            ans=i;
        }
    }
    cout<<ans+1<<endl;
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
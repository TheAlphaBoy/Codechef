#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define mod 1000000007

//......There'll be a day,I'll be loved,I'll be admired and they'll respect me......
 
 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
           
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==1){
            cout<<"yes"<<endl;
        }
         if(n==2){
                if(a[0]>a[1]){
                    cout<<"no"<<endl;
                }
                else{
                    cout<<"yes"<<endl;
                }
                continue;
            }
            if(n==3){
                if(a[1]<min(a[2],a[0]) || a[1]>max(a[2],a[0])){
                    cout<<"no"<<endl;
                }
                else{
                    cout<<"yes"<<endl;
                }
                continue;
            }
            
            cout<<"yes"<<endl;
        
        }
 
  return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long
#define pii pair<int,int>
#define ff first
#define ss second
#define mod 1000000007
// #define mod 998244353
#define MAX 100001
#define ourmap unordered_map<int,int>
#define inf INT64_MAX
#define in(ar,n,si) for(int i=si;i<(int)n;i++) cin>>ar[i];
#define out(ar,n,si) for(int i = si;i < (int)n;i++) cout<<ar[i]<<" "
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define ninf INT64_MIN

int32_t main(){
    fast
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       vector<int> a(n);
       in(a,n,0);
       reverse(a.begin(),a.end());
       int ans = 0;
       int i = 1;
       int temp = a[0];
       while(i < n){
           if(a[i] == temp){
               i++;
           }
           else{
               ans++;
               i *= 2;
           }
       }
       cout<<ans<<"\n";
    }
    return 0;
}

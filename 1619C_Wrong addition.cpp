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
int digits(int n){
    int cnt = 0;
    while(n){
        cnt++;
        n /= 10;
    }
    return cnt;
}
int32_t main(){
    fast
    int t;
    cin>>t;
    while(t--){
        int a,s;
        cin>>a>>s;
        int flag = 0;
        int b = 0;
        int k = 0;
        while(s){
            int x = s%10;
            int y = a%10;
            s /= 10;
            a /= 10;
            if(y > x){
                x  = (s%10)*10 + x;
                s /= 10;
            }
            if((x-y) < 0){
                flag = 1;
                break;
            }
            if(digits(x-y) > 1){
                flag = 1;
                break;
            }
            b = (x-y)*pow(10,k) + b;
            k++;
        }
        if(digits(a)){
            flag = 1;
        }
        if(flag){
            cout<<-1<<endl;
        }
        else{
            cout<<b<<endl;
        }
    }
    return 0;
}
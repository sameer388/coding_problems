#include <bits/stdc++.h>
using namespace std;
#define fast                          \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL);
#define int long long
#define pii pair<int, int>
#define ff first
#define ss second
#define mod 1000000007
// #define mod 998244353
#define MAX 100001
#define ourmap unordered_map<int, int>
#define inf INT64_MAX
#define in(ar, n, si)                 \
	for (int i = si; i < (int)n; i++) \
		cin >> ar[i];
#define out(ar, n, si)                \
	for (int i = si; i < (int)n; i++) \
	cout << ar[i] << " "
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define ninf INT64_MIN

int32_t main()
{
	fast int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	int dist;
	int x3, y3, x4, y4;

	if (x1 - x2 == 0)
	{
		dist = abs(y1 - y2);
		cout << x1 + dist << " " << y1 << " " << x2 + dist << " " << y2 << endl;
	}
	else if (y1 == y2)
	{
		dist = abs(x1 - x2);
		cout << x1 << " " << y1 + dist << " " << x2 << " " << y2 + dist << endl;
	}
	else if(abs(x1 -x2) == abs(y1-y2))
	{
		cout<<x2<<" "<<y1<<" "<<x1<<" "<<y2<<endl;
	}
    else{
		cout<<-1<<"\n";
	}
	return 0;
}

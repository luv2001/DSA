#include <bits/stdc++.h>
#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(long long i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)
using ll = long long;


using namespace std;
using ll = long long;


void solve(ll W, ll n, vector<ll> v)
{
	vector<ll> ans;
	rep(i, W)
	{
		ans.push_back(i + 1);
	}


	vector<pair<int, int>> swappy;

	rep(i, v.size() - 1)
	{
		if (v[i] != v[i + 1] - 1)
		{
			swappy.push_back({v[i] , v[i + 1] - 1});
		}
	}

	reverse(swappy.begin(), swappy.end());





	for (auto it : swappy)
	{
		swap(ans[it.first] , ans[it.second]);
		// cout << it.first << " "  << it.second << endl;
	}

	for (auto it : ans) cout << it << " ";
	cout << endl;



}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


	ll t;
	cin >> t;
	while (t--)
	{
		ll W, n;
		cin >> W >> n;
		vector<ll> v;

		v.push_back(0);

		for (ll i = 0 ; i < n ; i++)
		{
			ll x;
			cin >> x;
			v.push_back(x);
		}

		solve(W, n, v);
	}





}



















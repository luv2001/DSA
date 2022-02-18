#include <bits/stdc++.h>
#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)
using ll = long long;


using namespace std;
using ll = long long;



long long solve(ll n, ll x , ll y , vector<ll> v )
{

	bool parity = false;

	rep(i, v.size())
	{
		if (v[i] % 2 != 0)
		{
			parity = !parity;
		}
	}

	if (((x % 2) ^ parity) != (y % 2))
	{
		cout << "Bob" << endl;
	}
	else
	{
		cout << "Alice" << endl;

	}

	return -1;

}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;
	while (t--)
	{
		long long n, x, y;
		cin >> n >> x >> y;

		vector<long long> v;
		rep(i, n)
		{
			int x;
			cin >> x;
			v.push_back(x);
		}

		long long ans =  solve(n, x, y, v);

	}



}








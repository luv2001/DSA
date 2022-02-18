#include <bits/stdc++.h>
#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(long long i=0;i<(n);++i)
#define repA(i,a,n) for(long long i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)
using ll = long long;


using namespace std;
using ll = long long;

string solve(vector<ll> x, ll N)
{
	vector<ll> y = x;
	sort(y.begin(), y.end());

	unordered_map <ll, ll> mp_1;
	unordered_map <ll, ll> mp_2;
	unordered_map <ll, ll> mp_3;
	unordered_map <ll, ll> mp_4;

	rep(i, N)
	{
		if ((x[i] & y[i]) != 0  && (x[i] != y[i]))
		{
			mp_1[x[i]] = y[i];
		}
	}

	reverse(y.begin(), y.end());

	rep(i, N)
	{
		if ((x[i] & y[i]) != 0 && (x[i] != y[i]) )
		{
			mp_1[x[i]] = y[i];
		}
	}

	for (auto it : mp_1) mp_2[it.second] = it.first;



	for (auto it : mp_1)
	{
		auto itr = mp_1.find(it.second);
		if (itr != mp_1.end())
		{
			mp_3[it.first] = itr->second;
		}
	}

	for (auto it : mp_3) mp_4[it.second] = it.first;
	reverse(y.begin(), y.end());
	ll count = 0;


	cout << endl << endl << endl;

	for (auto it : mp_1) cout << it.first <<   " " << it.second << endl;
	cout << endl;


	for (auto it : mp_2) cout << it.first <<   " " << it.second << endl;
	cout << endl;

	for (auto it : mp_3) cout << it.first <<   " " << it.second << endl;
	cout << endl;


	for (auto it : mp_4) cout << it.first <<   " " << it.second << endl;
	cout << endl;


	rep(i, N)
	{
		ll n = x[i];
		ll m = y[i];

		if (n == m)
		{
			count++;
		}
		else
		{
			if (mp_1[n] == m) count++;
			else if (mp_2[n] == m)count++;
			else if (mp_3[n] == m)count++;
			else if (mp_4[n] == m)count++;
			else
			{
				break;
			}
		}
	}

	if (count == N) return "YES";
	else return "NO";


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
		ll N;
		cin >> N;
		vector<ll> v;

		rep(i, N)
		{
			ll x;
			cin >> x;
			v.push_back(x);
		}

		cout << solve(v, N) << endl;
	}

	cout << (9 & 24) << endl;



}



















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

void solve(ll N , string s)
{
	bool canSwap = true;

	// cout << s << endl;

	string sored = s;
	sort(sored.begin(), sored.end());


	ll p1 = 0;
	ll p2 = s.length() - 1;

	ll c1 = 0;
	ll c2 = s.length() - 1;

	while (p1 <= p2)
	{
		string x;
		x.push_back(s[p1]);
		x.push_back(s[p2]);

		string y;
		y.push_back(sored[c1]);
		y.push_back(sored[c2]);

		string reverse;
		reverse.push_back(s[p2]);
		reverse.push_back(s[p1]);

		// cout << x << " " << y <<  " " <<  reverse << " " << endl;

		if (x == y || reverse == y)
		{
			p1++;
			c1++;
			p2--;
			c2--;
		}
		else
		{
			canSwap = false;
			break;
		}
	}

	if (canSwap) cout << "true" << endl;
	else cout << "false" << endl;

}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	long long t;
	cin >> t;
	while (t--)
	{
		ll N;
		cin >> N;
		string s;
		cin >> s;

		solve(N, s);
	}



}



















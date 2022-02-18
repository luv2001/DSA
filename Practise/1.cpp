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

	ll pt = 0;

	while (pt < N)
	{
		if (x[pt] == y[pt])
		{
			pt++;
		}
		else
		{
			auto it = find(x.begin(), x.end(), y[pt]);
			ll idx =  it - x.begin();

			if ( (x[pt] & x[idx]) != 0 )
			{
				swap(x[pt] , x[idx]);
				pt++;
			}
			else
			{
				int possible = 0;

				// cout << idx << " " << pt << endl;
				for (ll i = pt + 1 ; i < (N) ; i++)
				{
					// cout << i << " ";
					if (((x[i] & x[pt]) != 0) && ( (x[i] & x[idx]) != 0))
					{
						swap(x[pt] , x[i]);
						swap(x[pt] , x[idx]);
						pt++;
						break;
					}
					else
					{
						if (i == N - 1)
						{
							possible = -1;
							break;
						}

					}
				}
				if (possible == -1)  break;
			}
		}
	}

	if (y == x)
	{
		return "YES";
	}
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



}



















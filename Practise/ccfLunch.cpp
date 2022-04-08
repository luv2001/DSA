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

ll isPresent(ll W , ll arr[] ,  ll n )
{
	ll t[n + 1][W + 1];

	rep(i, n + 1)
	{
		rep(j, W + 1)
		{
			if ( (i == 1 && arr[i - 1] == j) || ( j == 0 && (i > 0) )  )
			{

				t[i][j] = 1;
			}
			else if (i == 1 && arr[i - 1] != j)
			{
				t[i][j] = 0;
			}
			else
			{
				if (arr[i - 1] <= j)
				{
					t[i][j] =   max( ( t[i - 1][j - arr[i - 1]] ) , ( t[i - 1][j] ) );
				}
				else
				{
					t[i][j] = t[i - 1][j];
				}
			}
		}
	}
	return t[n][W];
}

void solve(ll arr[], ll n)
{
	ll sum = 0;

	for (ll i = 0 ; i < n ; i++)
	{
		sum = sum + arr[i];
	}


	for (ll i = sum / 2 ; i <= sum ; i++)
	{
		if (isPresent(i, arr , n))
		{
			cout <<  max(i, (sum - i)) << endl;
			break;
		}
	}

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
		ll n;
		cin >> n;
		ll arr[n];

		for (ll i = 0 ; i < n ; i++)
		{
			cin >> arr[i];
		}

		solve(arr , n);


	}





}



















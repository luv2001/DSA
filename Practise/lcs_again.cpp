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


int sumIs(int arr[] , int n, int m)
{
	int t[n + 1][m + 1];

	rep(i, n + 1)
	{
		rep(j, m + 1)
		{
			if (i == 0 && j == 0) t[i][j] = 1;
			else if (i == 0) t[i][j] = 0;
			else if (j == 0) t[i][j] = 1;
			else
			{
				if (arr[i - 1] <= j)
				{
					t[i][j] = max( t[i - 1][j - arr[i - 1]] , t[i - 1][j]);
				}
				else
				{
					t[i][j] = t[i - 1][j];
				}
			}
		}
	}

	return t[n][m];
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
		int n, m;
		cin >> n >> m;

		int arr[n];

		rep(i, n) cin >> arr[i];

		if (sumIs(arr, n, m))
		{
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;


	}



}



















#include <bits/stdc++.h>
#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)
#define push_back pb
using ll = long long;


using namespace std;
using ll = long long;


int minCoins(int arr[], int N, int sum)
{
	int val[N];
	rep(i, N) val[i] = 1;

	int t[N + 1][sum + 1];

	rep(i, N + 1)
	{
		rep(j, sum + 1)
		{
			if (i == 0 && j > 0)
			{
				t[i][j] = INT_MAX;
			}
			else if (j == 0)
			{
				t[i][j] = 1;
			}
			else
			{
				if (arr[i - 1] <= j)
				{
					t[i][j] = min(t[i][j - arr[i - 1]] , t[i - 1][j]);
				}
				else
				{
					t[i][j] = t[i - 1][j];
				}
			}
		}
	}

	return t[N][sum];


}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int V = 11 ;
	int  M = 4 ;
	int coins[] = {9, 6, 5, 1};

	cout << minCoins(coins , M , V) << endl;


}



















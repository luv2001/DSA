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

int countPartitions(int n, int d, vector<int> &arr) {
	int sum = 0;
	int zero = 0;

	int mod = 1e9 + 7;


	rep(i, n)
	{
		sum = sum + arr[i];
		if (arr[i] == 0)
		{
			zero++;
		}
	}


	if ((sum + d) % 2 == 0)
	{
		int s1 = (sum + d) / 2;
		sum = s1;
		int t[n + 1][sum + 1];


		for (int i = 0; i < n + 1; i++)
		{
			t[i][0] = 1;
		}

		for (int j = 1; j < sum + 1 ; j++)
		{
			t[0][j] = 0;
		}

		for (int i = 1 ; i < n + 1 ; i++)
		{
			for (int j = 1 ; j < sum + 1 ; j++)
			{
				if ((arr[i - 1] <= j) && arr[i - 1] != 0 )
				{
					t[i][j] = ( t[i - 1][j - arr[i - 1]] % mod + t[i - 1][j] % mod) % mod;
				}
				else
				{
					t[i][j] = t[i - 1][j] % mod;
				}
			}
		}

		t[n][sum] = t[n][sum] % mod;
		return t[n][sum] * pow(2, zero) ;

	}
	else
	{
		return 0;
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<int> arr = {5, 2, 5, 1};
	int n = 4;
	int d = 3;
	cout << countPartitions(n, d, arr) << endl;


}



















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


int perfectSum(int arr[], int n, int sum)
{
	int t[n + 1][sum + 1];
	long long mod = 1e9 + 7;

	int zero = 0;
	rep(i, n) if (arr[i] == 0) zero++;
	rep(i, n + 1)
	{
		t[i][0] = 1;
	}

	for (int j = 1 ; j <= sum ; j++)
	{
		t[0][j] = 0;
	}

	for (int i = 1 ; i < n + 1 ; i++)
	{
		for (int j = 1; j < sum + 1 ; j++)
		{
			if (arr[i - 1] <= j && arr[i - 1] != 0)
			{
				t[i][j] = (t[i - 1][j] % mod + t[i - 1][j - arr[i - 1]] % mod) % mod;
			}
			else
			{
				t[i][j] = t[i - 1][j] % mod;
			}
		}
	}


	return (pow(2, zero) * t[n][sum]) % mod;

}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N = 5;
	int arr[] = {0, 0, 1, 2, 3};
	int sum = 3;

	cout << perfectSum(arr, N, sum) << endl;


}



















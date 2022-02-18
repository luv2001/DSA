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

int noOfWays(int arr[] , int sum , int N)
{
	int t[N + 1][sum + 1];

	rep(i, N + 1)
	{
		rep(j, sum + 1)
		{
			if (i == 0 && j > 0)
			{
				t[i][j] = 0;
			}
			else if (j == 0)
			{
				t[i][j] = 1;
			}
			else
			{
				if (arr[i - 1] <= j)
				{
					t[i][j] = t[i - 1][j] + t[i][j - arr[i - 1]];
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

	int N = 3;
	int arr[] = {3, 2, 1};
	int sum = 5;

	cout << noOfWays(arr, sum, N) << endl;

}



















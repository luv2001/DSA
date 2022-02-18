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


int solve(int N, int K , int arr[])
{
	int sum = 0;
	rep(i, N) sum += arr[i];
	if (N == 1)
	{
		if (arr[0] >= K) return 1;
		else return -1;
	}
	else if (sum % K == 0) return sum / K;
	else
	{
		int candy = sum / K;
		rep(i, N)
		{
			if ((sum - arr[i]) / K == candy)
			{
				return -1;
				break;
			}
		}

		return candy;
	}
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
		int N , K;
		cin >> N >> K;

		int arr[N];
		rep(i, N) cin >> arr[i];

		cout << solve(N, K , arr) << endl;
	}



}



















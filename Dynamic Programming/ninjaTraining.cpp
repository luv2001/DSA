#include <bits/stdc++.h>
#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)
#define pb push_back
#define printVec(v) for(auto it : v) cout << it << " "; cout << endl;
using ll = long long;

using namespace std;
using ll = long long;

int solve(int idx , int last , int n , vector<vector<int>> &a)
{
	if (idx >= n) return 0;

	int maxi = INT_MIN;
	for (int i = 0 ; i < 3 ; i++)
	{
		if (i != last)
			maxi = max(maxi , a[idx][i] + solve(idx + 1 , i , n , a));
	}
	return maxi;

}

int ninjaTraining(int n, vector<vector<int>> &a)
{
	vector<vector<int>> dp(n , vector<int> (3, -1));

	for (int i = 0 ; i < 3 ; i++)
	{
		int maxi = INT_MIN;
		for (int j = 0 ; j < 3 ; j++)
		{
			if (j != i)maxi = max(maxi , a[n - 1][j]);
		}
		dp[n - 1][i] = maxi;
	}


	for (int i = n - 2 ; i >= 0 ; i--)
	{
		dp[i][0] = max(a[i][1] + dp[i + 1][1]  , a[i][2] + dp[i + 1][2]);
		dp[i][1] = max(a[i][0] + dp[i + 1][0]  , a[i][2] + dp[i + 1][2]);
		dp[i][2] = max(a[i][0] + dp[i + 1][0]  , a[i][1] + dp[i + 1][1]);
	}


	return max(max(dp[0][1] , dp[0][2]) , dp[0][3]);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// 3
	// 10 40 70
	// 20 50 80
	// 30 60 90

	int n = 3;
	vector<vector<int>> a = {{73, 57, 31} , {61 , 30 , 34} , {87 , 64 , 41} , {9 , 69  , 12} , {33 , 22 , 62} , {8 , 15, 59} , {74 , 74 , 51} , {72, 5 , 62} , {23, 72 , 93}};


	cout << ninjaTraining(n , a);


}


// 10
// 99 11 68
// 94 40 29
// 74 64 1
// 83 56 42
// 68 15 85
// 97 32 43
// 100 46 4
// 23 74 73
// 54 9 51
// 50 43 88
















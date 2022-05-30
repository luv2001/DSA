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

int solve(int i1 , int j1 , int i2 , int j2 , int r , int c ,  vector<vector<int>> &g , vector<vector<vector<int>>> &dp)
{
	if (j1 < 0 || j2 < 0 || j1 >= c || j2 >= c) return -1e8;

	if (dp[i1][j1][j2] != -1) return dp[i1][j1][j2];

	if (i1 == r - 1)
	{
		if (i1 == i2 && j1 == j2)
		{
			return dp[i1][j1][j2] =  g[i1][j1];
		}
		else
		{
			return dp[i1][j1][j2] = g[i1][j1] + g[i2][j2];
		}
	}

	if (i1 == i2 && j1 == j2)
	{
		int ans = INT_MIN;
		for (int i = -1 ; i <= 1 ; i++)
		{
			for (int j = -1 ; j <= 1 ; j++)
			{
				ans =  max(solve(i1 + 1  , j1 + i , i2 + 1 , j2 + j , r , c , g , dp) , ans);
			}
		}

		return dp[i1][j1][j2] =  g[i1][j1] + ans;
	}
	else
	{
		int ans = INT_MIN;
		for (int i = -1 ; i <= 1 ; i++)
		{
			for (int j = -1 ; j <= 1 ; j++)
			{
				ans =  max(solve(i1 + 1  , j1 + i , i2 + 1 , j2 + j , r , c , g , dp) , ans);
			}
		}

		return dp[i1][j1][j2] = g[i1][j1] + g[i2][j2] + ans;
	}
}

int maximumChocolates(int r, int c, vector<vector<int>> &g) {


	vector<vector<vector<int>>> dp(r , vector<vector<int>> (c , vector<int> (c , -1)));


	return solve(0 , 0 , 0 , c - 1 , r, c , g , dp);

}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int r = 3;
	int c = 2;

	vector<vector<int>> grid = {{2, 3} , {3, 4} , {5, 6}};

	cout << maximumChocolates(r , c , grid);

	// vector<vector<int>> dp(5 , vector<int> (3 , -1));

	// vector<vector<vector<int>>> dp( 4 , vector<vector<int>> (4 , vector<int> (4 , 1)));
//
	// vector<vector<vector<vector<int>>>> dp(5 , vector<vector<vector<int>>> (5 , vector<vector<int>> (5 , vector<int> (5 , -1))));



	// dp[0][1][1][2] = -1;
	// cout << dp[0][1][1][2];


	// int i1 = 0;
	// int i2 = 0;
	// int j1 = 0;
	// int j2 = 4;

	// for (int i = -1 ; i <= 1 ; i++)
	// {
	// 	for (int j = -1 ; j <= 1 ; j++)
	// 	{
	// 		cout << i1 + 1 << " " << j1 + i << " " <<  i2 + 1 << " " << j2 + j << endl;
	// 		// solve(i1 + 1  , j1 + i , i2 + 1 , j2 + j , r , c , g);
	// 	}
	// }



}



















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

int f(int m , int n , string x , string y)
{
	if (m == -1 || n == -1) return 0;

	if (x[m] == y[n]) return 1 + f(m - 1 , n - 1 , x , y);
	else return max(f(m - 1 , n, x , y) , f(m , n - 1 , x , y));

}

int longestCommonSubsequence(string x, string y) {


	int m = x.length();
	int n = y.length();

	vector<vector<int>> dp(m + 1 , vector<int> (n + 1, 0));

	// vector<int> prev(n+1 , 0) , curr(n+1 , 0);

	// if(x[0] == y[0]) prev[0] = curr[0] = 1;

	for (int i = 0 ; i <= m ; i++) dp[i][0] = 0;
	for (int j = 0 ; j <= n; j++) dp[0][j] = 0;

	for (int i = 1 ; i <= m ; i++)
	{
		for (int j = 1 ; j <= n ; j++)
		{
			if (x[i - 1] == y[j - 1])
			{
				dp[i][j] = 1 + dp[i - 1][j - 1];
			}
			else
			{
				dp[i][j] = max(dp[i - 1][j] , dp[i][j - 1]);
			}
		}
	}


	// for (auto it : dp)
	// {
	// 	printVec(it);
	// }

	int a = m;
	int b = n;

	string s =  "";

	while (dp[a][b] != 0)
	{
		if (x[a - 1] == y[b - 1])
		{
			s.push_back(x[a - 1]);
			a--;
			b--;
		}
		else
		{
			int b_move = 0;
			int max = dp[a - 2][b - 1];
			if (dp[a - 1][b - 2] > max)
			{
				b_move = 1;
			}

			if (b_move == 0)
			{
				a -= 1;
			} else b -= 1;

		}
	}

	cout << s << endl;

	return dp[m][n];

}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


	string x = "adbucsdcdsacbydcba";

	cout << x.size();
	// string y = "ace";

	// cout << longestCommonSubsequence(x , y);


}



















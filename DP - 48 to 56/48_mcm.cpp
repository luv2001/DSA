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

int mod = 1003;

int f(int i , int j , int bool_val , string S , vector<vector<vector<int>>> &dp)
{
	if (i > j) return 0;
	if (i == j)
	{
		if (bool_val == 1)
		{
			if (S[i] == 'T') return 1;
			else return 0;
		}
		else
		{
			if (S[i] == 'T') return 0;
			else return 1;
		}
	}

	int ans = 0;

	if (dp[i][j][bool_val] != -1) return dp[i][j][bool_val];

	for (int k = i + 1 ; k <= j - 1 ; k += 2)
	{

		int lT = f(i , k - 1 , 1 , S , dp);
		int lF = f(i , k - 1 , 0 , S , dp);
		int rT = f(k + 1 , j , 1 , S , dp);
		int rF = f(k + 1 , j , 0 , S , dp);


		if (S[k] == '|')
		{
			if (bool_val == 1)
			{
				int res = lT % mod  * rT % mod  + lT % mod  * rF % mod  + lF % mod  * rT % mod ;
				ans += res;
			}
			else
			{
				int res = lF % mod  * rF % mod ;
				ans += res;
			}
		}

		else if (S[k] == '&')
		{
			if (bool_val == 1)
			{
				int res = lT % mod * rT % mod;
				ans += res;
			}
			else
			{
				int res = lF % mod * rF % mod + lT % mod  * rF % mod  + lF % mod  * rT % mod ;
				ans += res;
			}
		}

		else if (S[k] == '^')
		{
			if (bool_val == 1)
			{
				int res = lT % mod  * rF % mod  + lF % mod  * rT % mod ;
				ans += res;
			}
			else
			{
				int res = lT % mod  * rT % mod  + lF % mod  * rF % mod ;
				ans += res;
			}
		}
	}


	return dp[i][j][bool_val] = ans;

}

int countWays(int N, string S) {


	int i = 0;
	int j = N - 1;
	return f(i, j, 1, S) % mod;
}


// 5
// T^F|F

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// int N = 7;
	// string S = "T|T&F^T";

	// cout << countWays(N, S) << endl;
	int N = 8;

	vector<vector<vector<int>>> dp(N + 1, vector<vector<int>>(N + 1 , vector<int> (2, -1)));


}


// [[1, 3] , [4, 5] , [1, 4] , [5, 2] , [2, 2] , [3, 5] , [9, 1] , [5, 2] , [7, 2] , [1, 4] , [1, 2] , [3, 2] ]


35
T | F^F&T | F^F^F^T | T&T^T | F^T^F&F^T | T^F






// "ltsqjodzeriqdtyewsrpfscozbyrpidadvsmlylqrviuqiynbscgmhulkvdzdicgdwvquigoepiwxjlydogpxdahyfhdnljshgjeprsvgctgnfgqtnfsqizonirdtcvblehcwbzedsmrxtjsipkyxk"






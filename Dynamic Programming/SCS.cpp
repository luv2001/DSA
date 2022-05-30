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


string SCS(string x , string y)
{
	int m = x.length();
	int n = y.length();

	vector<vector<int>> dp(m + 1 , vector<int> (n + 1 , 0));

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

	int i = m;
	int j = n;

	string ans = "";

	int sum = 0;
	int left = 0;
	int right  = 0;

	while (i > 0 && j > 0)
	{
		if (x[i - 1] == y[j - 1])
		{

			sum += max(left , right);
			left = 0;
			right = 0;


			ans.push_back(x[i - 1]);
			i--;
			j--;
		}
		else
		{
			if (dp[i - 1][j] > dp[i][j - 1])
			{
				left++;
				ans.push_back(x[i - 1]);
				i--;
			}
			else
			{
				right++;
				ans.push_back(y[j - 1]);
				j--;
			}
		}
	}

	// cout << sum << endl << endl;

	sum += max(i, j);

	return sum;

	for (auto it : dp)
	{
		printVec(it);
	}

	// while (i > 0)
	// {
	// 	ans.push_back(x[i - 1]);
	// 	i--;
	// }


	// while (j > 0)
	// {
	// 	ans.push_back(y[j - 1]);
	// 	j--;
	// }

	reverse(ans.begin(), ans.end());

	return ans;

}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string x = "intention";
	string y = "execution";

	cout << SCS(x , y);



}



















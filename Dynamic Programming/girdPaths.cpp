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

// int solve(int i , int j , int n , int m )
// {
// 	if ( i < 0 || j < 0 )return 0;
// 	if (i == 0 && j == 0 )return 1;

// 	int left = solve(i - 1 , j , n , m);
// 	int right = solve(i , j - 1 , n , m);

// 	return left + right;
// }

int uniquePaths(int n, int m) {
	// vector<vector<int>> dp( n + 1 , vector<int> (m + 1, 0));


	vector<int> dp(m , 0);
	vector<int> temp(m , 0);

	for (int i = 0 ; i < n ; i++)
	{
		for (int j = 0 ; j < m ; j++)
		{
			if (j == 0 && i == 0) temp[0] = 1;
			else
			{
				int up = 0;
				int left = 0;

				if (j > 0) up = temp[j - 1];
				if (i > 0) left = dp[j];

				temp[j] = up + left;

			}

		}
		dp = temp;
	}

	return temp[m - 1];

}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cout << uniquePaths(4, 4);



}



















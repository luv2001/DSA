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



int mazeObstacles(int n, int m, vector< vector< int> > &mat) {

	vector<vector<int>> dp( n , vector<int> (m, 0));


	dp[0][0] = 1;

	for (int i = 0 ; i < n ; i++)
	{
		for (int j = 0 ; j < m ; j++)
		{
			if (mat[i][j] == -1) dp[i][j] = 0;
			else if (i == 0 && j == 0) dp[i][j] = 1;
			else
			{
				int up = 0;
				int left = 0;

				if (i > 0) up = dp[i - 1][j];
				if (j > 0) left = dp[i][j - 1];

				dp[i][j] = up + left;
			}
		}
	}

	return dp[n - 1][m - 1];
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


	int n = 3;
	int m = 3;
	vector<vector<int>> mat = {{0, 0, 0} , {0, -1, 0} , {0, 0, 0}};

	cout << mazeObstacles( n , m , mat);



}



















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

int mini = INT_MAX;

int solve(int i , int j , vector<vector<int>> grid)
{
	if ( i < 0 || j < 0 ) return 1e8;
	if (i == 0 && j == 0) return grid[i][j];
	else
	{
		int up =  grid[i][j] + solve(i - 1 , j , grid);
		int left =  grid[i][j] + solve(i , j - 1 , grid);

		return min(up , left);
	}

}

int minSumPath(vector<vector<int>> &grid) {
	int n = grid.size();
	int m = grid[0].size();


	return solve(n - 1, m - 1 , grid);

}

// 2 3
// 5 9 6
// 11 5 2

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<vector<int>> grid = {{5, 9, 6} , {11, 5, 2}};
	cout << minSumPath(grid) << endl;


}



















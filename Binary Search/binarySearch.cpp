#include <bits/stdc++.h>
#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)
#define printVec(v) for(auto it : v) cout << it << " "; cout << endl;
using ll = long long;

using namespace std;
using ll = long long;

struct TreeNode
{
	int data;
	struct TreeNode* left;
	struct TreeNode* right;

	TreeNode(int val)
	{
		data = val;
		left = right = NULL;
	}

};

int f(int i , int j , vector<vector<int>> &matrix , int n , int m)
{
	if ( i == 0  )return matrix[i][j];
	if (j < 0 || j >= m ) return -1e8;

	else
	{
		int tL = -1e8;
		int t = -1e8;
		int tR = -1e8;

		tL = matrix[i][j] + f(i - 1 , j - 1 , matrix , n , m);
		t = matrix[i][j] + f(i  - 1 , j  , matrix , n , m);
		tR = matrix[i][j] + f(i - 1 , j + 1 , matrix , n , m);

		return max(max(tL , t) , tR);

	}

}

int getMaxPathSum(vector<vector<int>> &matrix )
{
	int n = matrix.size();
	int m = matrix[0].size();

	int ans = INT_MIN;

	return f(n - 1 , 0 , matrix , n , m);

}

// 5 5
// -9999 -9888 -9777 -9666 -9555
// 1 10 2 4 5
// -9999 -9888 -9777 -9666 -9555
// 0 0 0 0 0
// -99 -98 -97 -96 -95


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);




	vector<vector<int>> mat = {{ -9999, -9888 , -9777, -9666, -9555} , {1, 10, 2, 4, 5} , { -9999, -9888, -9777, -9666 , -9555} , {0, 0, 0, 0, 0} , { -99, -98, -97, -96, -95}};
	cout << getMaxPathSum(mat);









}



















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

int f(int i , int j , vector<int> arr , vector<vector<int>> &dp)
{
	if (i == j) return 0;

	if (dp[i][j] != -1) return dp[i][j];

	int mini = INT_MAX;



	for (int k = i ; k < j ; k++)
	{
		int res = arr[i - 1] * arr[k] * arr[j] + f(i , k , arr , dp) + f(k + 1 , j , arr , dp);
		mini = min(mini , res);
	}


	return dp[i][j] = mini;

}

int matrixMultiplication(int N, vector<int> arr)
{
	vector<vector<int>> dp(N + 1 , vector<int> (N + 1 , -1));
	return f(1 , N - 1 , arr , dp);
}



int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<int> arr = {40, 20, 30, 10, 30};
	int N = 5;

	cout << matrixMultiplication(N , arr);



}



















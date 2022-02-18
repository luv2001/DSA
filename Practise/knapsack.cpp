#include <bits/stdc++.h>
#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)
using ll = long long;


using namespace std;
using ll = long long;




int knapSack(int W, int wt[], int val[], int n)
{

	int t[n + 1][W + 1];

	// rep(i, n + 1)
	// {
	// 	rep(j, W + 1)
	// 	{
	// 		if (i == 0 || j == 0)
	// 		{
	// 			t[i][j] = 0;
	// 		}
	// 		else if (wt[i - 1] < j)
	// 		{
	// 			t[i][j] = max( val[i - 1] + t[i - 1][j - wt[i - 1]] , t[i - 1][j]);
	// 		}
	// 		else
	// 		{
	// 			t[i][j] = t[i - 1][j];
	// 		}
	// 	}
	// }

	// return t[n][W];

	if (n == 0 && W != val[0])
	{
		return 0;
	}
	else if (n == 0 && W == val[0])
	{
		return val[0];
	}
	else if (W >=  wt[n - 1])
	{
		return max( ( val[n - 1] +  knapSack(W - wt[n - 1] , wt, val , n - 1)) , knapSack(W , wt, val, n - 1) );
	}
	else
	{
		return knapSack(W , wt, val, n - 1);
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N = 4;
	int W = 10;
	int val[] = {2, 4, 6, 1};
	int wt[] = {3, 9, 1, 2};

	cout << knapSack(W, wt, val, N );


}



















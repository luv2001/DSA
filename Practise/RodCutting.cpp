#include <bits/stdc++.h>
#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)
#define push_back pb
using ll = long long;


using namespace std;
using ll = long long;

int cutRod(int val[], int n) {

	int W = 5;

	int t[n + 1][W + 1];

	int wt[n];
	rep(i, n) wt[i] = 0;


	rep(i, n + 1)
	{
		rep(j, W + 1)
		{
			if (i == 0 || j == 0)
			{
				t[i][j] = 0;
			}
			else if (wt[i - 1] <= j && t[i][j - wt[i - 1]])
			{


				t[i][j] = ( val[i - 1] + t[i][j - wt[i - 1]] + t[i - 1][j]);
			}
			else
			{
				t[i][j] = t[i - 1][j];
			}
		}
	}

	rep(i, n + 1)
	{
		rep(j, W + 1)
		{
			cout << t[i][j] << " ";
		}
		cout << endl;
	}

	return t[n - 1][W];

}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N = 3;
	int Price[] = {3, 2, 1};

	cout << cutRod(Price , N) << endl;



}



















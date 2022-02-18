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

int t[300001][300001];

int MCM(vector<int> &prices , int i, int j)
{
	if (t[i][j] != -1) return t[i][j];
	if (i >= j) return 0;
	else if (i + 1 == j)
	{
		return max(0, prices[j] - prices[i]);
	}
	else
	{
		int ans = INT_MIN;
		int temp;
		for (int k = i ; k < j ; k++)
		{

			int l, r;

			if (t[i][k] != -1)
			{
				l = t[i][k];
			} else l = MCM(prices, i, k );


			if (t[k + 1][j] != -1)
			{
				r = t[k + 1][j];
			} else r = MCM(prices, k + 1, j );


			temp  =  l  + r;
			ans = max(temp, ans);
		}

		t[i][j] = max(ans, prices[j] - prices[i]);
		return max(ans, prices[j] - prices[i]);
	}
}

int maxProfit(vector<int>& prices) {

	int i = 0;
	int j = prices.size() - 1;

	rep(i, prices.size())
	{
		rep(j, prices.size()) t[i][j] = -1;
	}

	return MCM(prices, i, j );
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<int> prices = {3, 3, 5, 0, 0, 3, 1, 4};

	cout << maxProfit(prices) << endl << endl;


}





















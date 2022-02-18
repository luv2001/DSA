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

unordered_map<string, int> mp;


int maxProfitDP(vector<int> prices, int bought , int t, int N)
{

	string x = to_string(bought) + to_string(t) + to_string(N);
	// if (mp.find(x) != mp.end()) return mp[x];
	if (bought == 0 || N == 0 ) return 0;
	else
	{	int y = min(t, prices[N - 1]);
		if (t < prices[N - 1])
		{
			int buy, not_buy;

			// if (dp[prices[N - 1]][N - 1][bought - 1] != -1)
			// {
			// 	buy = prices[N - 1] +  dp[prices[N - 1]][N - 1][bought - 1];
			// }
			// else buy =  prices[N - 1] - t + maxProfitDP(prices, bought - 1, prices[N - 1], N - 1);

			// if (dp[y][N - 1][bought] != -1)
			// {
			// 	not_buy = dp[y][N - 1][bought];
			// }
			// else not_buy =  maxProfitDP(prices, bought, y, N - 1);

			// string buy_s = to_string(bought - 1) + to_string( prices[N - 1]) + to_string(N - 1);
			// string not_buy_s = to_string(bought - 1) + to_string( prices[N - 1]) + to_string(N - 1);

			buy = prices[N - 1] +  maxProfitDP(prices, bought - 1, prices[N - 1], N - 1);
			not_buy =  maxProfitDP(prices, bought, y, N - 1);


			mp[x] = max(buy, not_buy);
			return mp[x];
		}
		else
		{
			mp[x] = maxProfitDP(prices, bought, y, N - 1);
			return mp[x];
		}
	}

}

int maxProfit(vector<int>& prices)
{
	reverse(prices.begin(), prices.end());

	int bought = 2;
	int t = prices[prices.size() - 1];

	int max_vector = *max_element(prices.begin(), prices.end());

	return maxProfitDP(prices , bought , t , prices.size());
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<int> prices = {3, 3, 5, 0, 0, 3, 1, 4};

	cout << maxProfit(prices);





}



















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

int MCM(vector<int>& prices, int i, int j)
{

	int temp_min = INT_MAX;
	int maxDiff = 0;

	for (int w = i ; w <= j ; w++)
	{
		temp_min = min( temp_min , prices[w]);

		maxDiff = max( maxDiff , prices[w] - temp_min);
	}

	return max(maxDiff , prices[j] - prices[i]);

}

int maxProfit(vector<int>& prices) {

	int i = 0;
	int j = prices.size() - 1;

	rep()

	int ans = INT_MIN;
	for (int k = 0 ; k <= j - 2; k++)
	{
		int temp = MCM(prices, i, k) +  MCM(prices, k, j);

		ans = max(temp, ans);
	}

	return max(ans , prices[j] - prices[i]);
}

// int maxProfit(vector<int>& prices) {

// 	vector<int> v;
// 	for (int i = 1; i < prices.size() ; i++)
// 	{

// 		v.push_back( max(prices[i] - prices[i - 1] , 0 ) );
// 	}

// 	// for (auto it : v) cout << it << " ";
// 	sort(v.begin(), v.end());



// 	if (v.size() == 0)
// 	{
// 		return 0;
// 	} else if (v.size() == 1) return v[0];
// 	else return v[v.size() - 1] + v[v.size() - 2];
// }


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<int> nums = {
		6, 1, 3, 2, 4, 7
	};
	cout << maxProfit(nums) << endl;


}



















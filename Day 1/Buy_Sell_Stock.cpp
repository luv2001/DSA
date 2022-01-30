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

int maxProfit(vector<int>& prices) {

	int profit = 0;

	int min = 100;


	for (auto it : prices)
	{
		if (min > it)
		{
			min = it;
		}

		if (it - min > profit)
		{
			profit = it - min;
		}
	}


	return profit;

}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<int> prices = {7, 1, 5, 3, 6, 4};
	cout << maxProfit(prices);




}



















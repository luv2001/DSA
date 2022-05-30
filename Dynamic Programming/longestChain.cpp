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

int diffChar(string x , string y)
{
	int n = x.length();
	int m = y.length();
	if (abs(n - m) != 1) return 0;


	if (n  > m)
	{
		map<char , int> mp;

		for (int i = 0 ; i < n ; i++) mp[x[i]]++;
		for (int i = 0 ; i < m ; i++) mp[y[i]]--;
		int s = 0;

		for (auto it : mp)
		{
			s += it.second;
			if (s > 1) break;
		}
		return s;
	}
	else
	{
		map<char , int> mp;

		for (int i = 0 ; i < m ; i++) mp[y[i]]++;
		for (int i = 0 ; i < n ; i++) mp[x[i]]--;
		int s = 0;

		for (auto it : mp)
		{
			s += it.second;
			if (s > 1) break;
		}
		return s;
	}


	return 1;
}

int longestStrChain(vector<string> &arr)
{
	int n = arr.size();

	vector<int> prevIndex(n , 0) , dp(n , 1);

	for (int i = 1 ; i < n ; i++)
	{
		for (int j = 0 ; j < i ; j++)
		{
			if (diffChar(arr[i] , arr[j]) == 1 && dp[i] < dp[j] + 1)
			{
				dp[i] = dp[j] + 1;
				prevIndex[i] = j;
			}
		}
	}

	int maxi = max_element(dp.begin(), dp.end()) - dp.begin();

	// for (int i = 0 ; i < dp.size() ; i++) maxi = max(maxi , dp[i]);

	return dp[maxi];
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<string> arr =  {"a", "b" , "ba" , "bca" , "bda" , "bdca" };

	cout << longestStrChain(arr);










}









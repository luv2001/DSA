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

void swap(int &a , int &b)
{
	// int c;
	// c = a;
	// a = b;
	// b = c;

	// a = a + b;
	// b = a - b;
	// a = a - b;

	a = a ^ b;
	b = b ^ a;
	a = a ^ b;
}

int jobScheduling(vector<int>& sT, vector<int>& eT, vector<int>& p ) {

	int n = eT.size();

//         int end = 0;
	int maxEnd = 0;


	for (auto it : eT) maxEnd = max(maxEnd , it);

	vector<vector<int>> dp(n + 1 , vector<int>(maxEnd + 1 , 0));

	for (int idx = n - 1 ; idx >= 0 ; idx--)
	{
		for (int end = maxEnd ; end >= 0 ; end--)
		{
			int take = 0;
			int notTake = dp[idx + 1][end];

			if (end <= sT[idx]) take = p[idx] + dp[idx + 1][eT[idx]];
			dp[idx][end] =  max(take , notTake);
		}
	}

	return dp[0][0];
}

// [1, 2, 3, 3]
// [3, 4, 5, 6]
// [50, 10, 40, 70]

bool isPal(int i, int j, string s)
{
	while (i <= j)
	{
		if (s[i] != s[j]) return false;
		i++;
		j--;
	}
	return true;
}

int f(int idx , string str)
{
	if (idx == str.size()) return 0;

	int ans = 0;

	for (int i = idx; i < str.size() ; i++)
	{
		if (isPal(idx , i  , str))
		{
			int res = 1 + f(i  , str);
			ans = max(ans , res);
		}
	}

	return ans;
}

int palindromicPartition(string str)
{
	return f(0 , str);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


	// int a = 5;
	// int b = 10;

	// swap(a , b);

	// cout << a << " " << b;

	// vector<int> sT = {3, 56, 1, 2, 19, 7, 19};
	// int n = sT.size();
	// vector<int> eT = {3, 4, 5, 6};
	// vector<int> p = {50, 10, 40, 70};

	// cout << jobScheduling(sT , eT , p);

	// vector<int> sTcp = sT;
	// vector<int> indexex(n , 0);

	// sort(sTcp.begin() , sTcp.end());

	// for (int i = 0 ; i < n ; i++)
	// {
	// 	auto it  = find(sT.begin() , sT.end() , sTcp[i]) - sT.begin();
	// 	cout << it;
	// }

	// vector<int> a = {3, 5, 6, 9, 10};

	// sort(a.begin(), a.end());

	// printVec(a);

	// auto it = upper_bound(a.begin(), a.end(), 8) - a.begin();
	// cout << it << endl;

	// normal insaan

	// map<int, int> dp = {{0, 0}};

	// // dp.insert({1, 3});
	// dp.insert({3, 50});
	// // dp.insert({4, 10});
	// dp.insert({5, 30});
	// // dp.insert({10, 40});
	// // dp.insert({7, 3});


	// auto it = prev(dp.upper_bound(4));


	// if (it != dp.end()) cout << it->first << " " << it->second << endl;

	// auto itRight = dp.rbegin();
	// auto itLeft = dp.begin();

	// cout << itRight->second << endl << itLeft->second ;



}



















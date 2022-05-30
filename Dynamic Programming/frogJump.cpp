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

int solve(int idx , int k , vector<int> heights , vector<int> &dp)
{
	if (dp[idx] != -1) return dp[idx];

	if (idx == 0) return dp[0] = 0;
	if (idx == 1) return dp[1] = abs(heights[0] - heights[1]);

	int mini = INT_MAX;

	for (int i = 1 ; i <= k ; i++)
	{
		if (idx - i < 0) break;
		mini = min(mini ,  abs(heights[idx] - heights[idx - i]) + solve(idx - i , k , heights , dp));
	}

	return dp[idx] = mini;

}


int rob(vector<int>& nums) {

	int n = nums.size();

	if (n == 1) return nums[0];

	int prev = nums[0];
	int prev2 = max(nums[0] , nums[1]);

	int curr = max(prev , prev2);

	for (int i = 2 ; i < n ; i++)
	{
		curr = max(nums[i] + prev , prev2);
		prev = prev2;
		prev2 = curr;
	}

	return curr;

}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<int> nums = {1};

	cout << rob(nums);



}



















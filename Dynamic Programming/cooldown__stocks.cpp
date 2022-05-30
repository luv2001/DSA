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



int f(int idx , int prev , vector<int>& nums , vector<vector<int>> &dp)
{
	if (idx == nums.size()) return 0;

	if (dp[idx][prev + 1] != -1) return dp[idx][prev + 1];


	int len = f(idx + 1 , prev , nums , dp);

	if (prev == -1 || nums[idx] > nums[prev] ) len = max(len ,  1 + f(idx + 1 , idx , nums , dp));
	return dp[idx][prev + 1] =  len;
}

int lengthOfLIS(vector<int>& nums) {

	int n = nums.size();

	vector<int> dp(n , 1) , prevIndex(n , 0);

	int maxLength = 1;

	for (int i = 0 ; i < n ; i++)
	{
		for (int j = 0 ; j < i ; j++)
		{
			if (nums[j] < nums[i] && 1 + dp[j] > dp[i])
			{
				dp[i] = 1 + dp[j];
			}
		}
	}



	return 1;

}

int longestIncreasingSubsequence(int arr[], int n)
{
	vector<int> temp;

	temp.push_back(arr[0]);

	for (int i = 1 ; i < n ; i++)
	{
		if (arr[i] > temp.back())
		{
			temp.push_back(arr[i]);
		}
		else
		{
			int idx = lower_bound(temp.begin() , temp.end() , arr[i]) - temp.begin();
			temp[idx] = arr[i];
		}
	}

	return temp.size();
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<int> nums = {1, 7, 8, 4, 5, 6, -1, 9};

	cout << lengthOfLIS(nums) << endl;


}



















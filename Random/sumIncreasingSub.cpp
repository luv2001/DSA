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


vector<int> maximumSumIncrea(vector<int> &nums)
{
	vector<int> ans;

	int n = nums.size();

	vector<int> LSS;

	for (auto it : nums) LSS.push_back(it);

	vector<int> prev(n, 0);

	int maxIndex = 0;
	int maxIndexAns = 0;

	for (int i = 0 ; i < n ; i++) prev[i] = i;

	for (int i = 0 ; i < n ; i++)
	{
		for (int j = 0 ; j < i ; j++)
		{
			if (nums[i] > nums[j])
			{

				LSS[i] = max(LSS[i] , nums[i] + LSS[j]);

			}
		}
	}

	ans.push_back(nums[maxIndex]);

	while (prev[maxIndex] != maxIndex)
	{
		ans.push_back(nums[prev[maxIndex]]);
		maxIndex = prev[maxIndex];
	}

	reverse(ans.begin(), ans.end());

	return ans;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<int> nums = {3, 2, 6, 4, 5, 1};

	vector<int> ans = maximumSumIncrea(nums);
	printVec(ans);
}



















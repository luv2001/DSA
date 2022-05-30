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

// vector<int> nextGreaterElements(vector<int>& nums) {

// 	stack<int> st;

// 	for (auto it : nums) st.push(it);

// 	int n = nums.size();
// 	vector<int> ans(n);


// 	for (int i = nums.size() - 1 ; i >= 0 ; i--)
// 	{
// 		while (!st.empty() && st.top() <= nums[i])
// 		{
// 			st.pop();
// 		}

// 		if (st.empty())
// 		{
// 			ans[i] = -1;
// 			st.push(nums[i]);
// 		}
// 		else
// 		{
// 			ans[i] = st.top();
// 			st.push(nums[i]);
// 		}
// 	}

// 	return ans;
// }



void leftSmaller(vector<int> nums)
{
	stack<int> st;

	st.push(0);

	int maxArea = 0;

	for (int i = 1 ; i <= nums.size() ; i++)
	{
		if (i == nums.size())
		{
			int rs = i;
			int ls;

			int height = nums[st.top()];

			st.pop();

			if (st.empty()) ls = -1;
			else ls = st.top();

			maxArea = max(maxArea , (rs - ls + 1) * height);
		}
		else
		{
			if (nums[st.top()] < nums[i])
			{
				st.push(i);
			}
			else
			{
				int rs = i;
				int ls;

				int height = nums[st.top()];

				st.pop();

				if (st.empty()) ls = -1;
				else ls = st.top();

				maxArea = max(maxArea , (rs - ls + 1) * height);
			}
		}
	}

	return maxArea;
}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<int> nums = {2, 1, 5, 6, 2, 3, 1};

	leftSmaller(nums);

	// vector<int> ans = nextGreaterElements(nums);
	// printVec(ans);



}



















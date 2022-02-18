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

vector<vector<int>> subsets(vector<int>& nums) {

	int n = nums.size();

	int m = pow(2, n);

	vector<vector<int>> ans;

	for (int i = 0 ; i < m ; i++)
	{
		vector<int> level = {};
		for (int j = 0; j < n ; j++)
		{
			if ( (i & (1 << j) ) )
			{
				level.push_back(nums[j]);
			}
		}
		ans.push_back(level);
	}

	return ans;
}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<int> nums = {1, 2, 3};

	vector<vector<int>> ans = subsets(nums);

	for (auto it : ans)
	{
		for (auto ut : it) cout << ut << " ";
		cout << endl;
	}




}



















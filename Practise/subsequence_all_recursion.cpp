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

void allSubSeqRecur(int idx , vector<int> nums , vector<int> &ds, vector<vector<int>> &ans)
{
	if (idx == nums.size())
	{
		ans.push_back(ds);
	}
	else
	{
		ds.push_back(nums[idx]);
		allSubSeqRecur(idx + 1, nums, ds, ans);
		ds.pop_back();
		allSubSeqRecur(idx + 1, nums, ds, ans);
	}
}


vector<vector<int>> allSubSeq(vector<int> nums)
{
	vector<vector<int>> ans;
	vector<int> ds;

	int idx = 0;

	allSubSeqRecur(idx, nums, ds, ans);

	return ans;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


	vector<int> nums = {1, 2, 3};

	vector<vector<int>> p = allSubSeq(nums);


	for (auto it : p)
	{
		for (auto ut : it) cout << ut << " ";
		cout << endl;
	}

}



















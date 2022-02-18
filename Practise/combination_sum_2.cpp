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



void findSubset(int idx, vector<int> &candidates , int target , vector<int> &ds, vector<vector<int>> &ans)
{
	if (idx == candidates.size())
	{
		if (target == 0)
		{
			vector<int> ds_copy = ds;
			sort(ds_copy.begin(), ds_copy.end());
			if (find(ans.begin(), ans.end() , ds_copy) == ans.end())
			{
				ans.push_back(ds_copy);
			}
		}

		return;
	}

	if (candidates[idx] <= target)
	{
		ds.push_back(candidates[idx]);
		findSubset(idx + 1 , candidates , target - candidates[idx] , ds, ans);
		ds.pop_back();
	}

	findSubset(idx + 1 , candidates , target , ds , ans);

}


vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

	vector<vector<int>> ans;
	vector<int> ds;

	findSubset(0, candidates, target , ds, ans);

	return ans;
}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<int> candidates = {2, 5, 2, 1, 2};
	int target = 5;

	vector<vector<int>> p = combinationSum2(candidates , target);

	for (auto it  : p)
	{
		for (auto ut : it)
		{
			cout << ut << " ";
		}
		cout << endl;
	}


}



















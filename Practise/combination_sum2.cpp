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

void combinationRecursion(int idx , int target , vector<int> candidates , vector<int> &ds , vector<vector<int>> &ans)
{

	if (target == 0 )
	{
		// cout << "sa" << endl;
		sort(ds.begin(), ds.end());
		ans.push_back(ds);
		return;
	}

	// cout << target << " ";

	for (int i = idx; i < candidates.size(); i++)
	{
		if ( i > idx && candidates[i] == candidates[i - 1]) continue;
		if (target >= candidates[i])
		{
			ds.push_back(candidates[i]);
			combinationRecursion(idx + 1 , target - candidates[i] , candidates , ds , ans);
			ds.pop_back();
		}
	}

}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

	vector<vector<int>> ans;
	vector<int> ds;

	combinationRecursion(0 , target , candidates , ds, ans);

	return ans;

}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


	vector<int> candidates = {10, 1, 2, 7, 6, 1, 5};
	int target = 8;


	vector<vector<int>> print = combinationSum2(candidates , target);

	cout << print.size() << endl;

	for (auto it : print)
	{
		for (auto ut : it) cout << ut << " ";
		cout << endl;
	}


}



















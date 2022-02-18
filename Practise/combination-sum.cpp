#include <bits/stdc++.h>
#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i);
using ll = long long;


using namespace std;
using ll = long long;

vector<vector<int>> ans;

void Answers(int index , int target , vector<int> candidates , vector<int> &ds , vector<vector<int>> &ans)
{

	if (index >= candidates.size())
	{

		if (target == 0)
		{
			ans.push_back(ds);
		}
		return ;
	}
	else if (target < 0) return ;
	else
	{
		if (candidates[index] >= target)
		{
			ds.push_back(candidates[index]);
			Answers(index , target - candidates[index] , candidates , ds , ans);
			ds.pop_back();
		}
		else
		{
			Answers(index + 1, target, candidates , ds, ans);
		}
	}


}


vector<vector<int>> combinationSum(vector<int>& candidates, int target)
{


	vector<int> ds;

	Answers(0, target, candidates, ds, ans);

	return ans;
}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<int> candidates = {2, 3, 6, 7};
	int target = 7;

	vector<vector<int>> print = combinationSum(candidates, target) ;


	cout << print.size();
	for (auto it : print)
	{
		for (auto ut : it ) cout << ut << " ";
		cout << endl;
	}






}



















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

void combinatinoVector(int idx, int N, vector<vector<int>> &ans , vector<int> &ds, vector<int> v)
{
	if (idx == v.size()) return;
	if (N == 0)
	{
		ans.push_back(ds);
		return;
	}

	ds.push_back(v[idx]);
	combinatinoVector(idx , N - 1 , ans , ds , v);
	ds.pop_back();
	combinatinoVector(idx + 1 , N, ans , ds, v);

}

vector<string> letterCombinations(string digits) {

	int N = 3;
	vector<int> v = {0, 1, 2};

	vector<vector<int>> ans;
	vector<int> ds;

	combinatinoVector(0, N , ans , ds , v);

	for (auto it : ans)
	{
		for (auto ut : it) cout << ut << " ";
		cout << endl;
	}


	return {"3"};



}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string digit = "23";
	vector<string> v = letterCombinations(digit);




}



















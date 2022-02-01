#include <bits/stdc++.h>
#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)
#define pb push_back
using ll = long long;


using namespace std;
using ll = long long;

vector<int> repeatedNumber(const vector<int> &A) {

	int size = A.size();
	unordered_map<int, int> mp;

	for (int i = 0; i < size; i++)
	{
		mp[i + 1] = 0;
	}

	for (auto it : A)
	{
		mp[it]++;
	}

	vector<int> ans;

	for (auto it : mp)
	{
		if (it.second == 2)
		{
			ans.push_back(it.first);
		}
	}

	for (auto it : mp)
	{
		if (it.second == 0)
		{
			ans.push_back(it.first);
		}
	}

	return ans;
}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<int> numbers = {3, 1, 2, 5, 3};

	vector<int> print = repeatedNumber(numbers);

	for (auto it : print)
	{
		cout << it << " ";
	}




}



















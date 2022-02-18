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

vector<vector<int>> merge(vector<vector<int>>& intervals) {

	vector<vector<int>> ans;

	for (int i = 0; i < intervals.size() - 1 ; i++)
	{
		vector<int> first = intervals[i];
		vector<int> second = intervals[i + 1];

		if (first[1] < second[0] && first[1] < second[1])
		{
			ans.push_back(first);
		}
		else
		{
			int one = first[0];
			int two = second[1];
			ans.push_back({one, two});

			auto it_begin = intervals.begin();
			auto erase_it = it_begin + i;
			intervals.erase(erase_it);
		}

	}

	vector<int> first = intervals[intervals.size() - 2];
	vector<int> second = intervals[intervals.size() - 1];

	if (first[1] < second[0] && first[1] < second[1])
	{
		ans.push_back(second);
	}


	return ans;

}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<vector<int>> intervals = {{1, 3} , {2, 9} , {8, 10} , {11, 17} , {15, 18}};
	vector<vector<int>> print = merge(intervals);

	for (auto it : print)
	{
		for (auto ut : it)
		{
			cout << ut << " ";
		}
		cout << endl;
	}


}



















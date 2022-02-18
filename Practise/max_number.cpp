#include <bits/stdc++.h>
#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)
#define push_back pb
using ll = long long;


using namespace std;
using ll = long long;

pair<int, int> constructMaxSumNumber(vector<int> &nums)
{
	if (nums.size() == 0) return {0, 0};
	else if (nums.size() == 1) return {nums[0] , 0};
	else if (nums.size() == 2) return {nums[0] , nums[1]};

	else
	{
		int n =	nums.size();
		sort(nums.begin() , nums.end());

		int number_1 = 0, number_2 = 0;

		int pt1 = 0;
		int t = 0;
		while (pt1 < n)
		{
			number_1 += pow(10, t) * nums[pt1];
			t++;
			pt1 += 2;
		}

		int pt2 = 1;
		int t2 = 0;
		while (pt2 < n)
		{
			number_2 += pow(10, t2) * nums[pt2];
			t2++;
			pt2 += 2;
		}

		return {number_1, number_2};
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<int> nums = {2, 4, 2, 1, 4};
	pair<int, int> p = constructMaxSumNumber(nums);

	cout << p.first << " " << p.second << " "  << endl;

}



















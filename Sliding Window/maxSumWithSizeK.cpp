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

int findMaxSumWithK(vector<int> &nums , int k)
{

	int l = 0 , r = 0 , sum = 0 , n = nums.size(), ans = 0;

	while (r < k)
	{
		sum += nums[r];
		r++;
	}
	r--;




	while (true)
	{
		ans = max(ans , sum);

		sum -= nums[l];
		l++;
		r++;
		if (r > n) break;
		sum += nums[r];
	}

	return ans;

}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<int> nums = {2, 3, 5, 2, -3, -7, 1, -3, 10};

	int k = 4;

	cout << findMaxSumWithK(nums , k) << endl;
}



















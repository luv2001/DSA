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

int maxSubArray(vector<int>& nums) {

	int sum = 0;
	int max = nums[0];

	for (auto it : nums)
	{
		sum = sum  + it;

		if (sum  > max)
		{
			max = sum;
			if (sum < 0)
			{
				sum = 0;
			}
		}
		else
		{
			if (sum < 0)
			{
				sum = 0;
			}
		}
	}

	return max;

}



int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<int> nums = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
	cout << maxSubArray(nums);


}



















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


int maximumOFvector(vector<int> nums)
{
	vector<int> y = nums;
	sort(y.begin(), y.end());
	return y[y.size() - 1];
}

int LIS(vector<int> nums , int N , int taken)
{

	int min_nums = *min_element(nums.begin(), nums.end());

	if ( N == 0) return 0;

	else
	{
		if ( taken  > nums[N - 1])
		{
			return  max( 1 + LIS(nums, N - 1, nums[N - 1]) , LIS(nums, N - 1, taken));
		}
		else
		{
			return LIS(nums, N - 1, taken);
		}
	}

	// int t[N+1][taken+1];


}

int lengthOfLIS(vector<int>& nums) {

	int taken = *max_element(nums.begin(), nums.end()) + 1;
	int N = nums.size();

	return LIS(nums , N , taken);

}




int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<int> nums = { -23, -3, -12, 2, 3, 1, 3, 12};

	cout << lengthOfLIS(nums) << endl;


	awdwadddadawdadwwwwwdassssadwd




}



















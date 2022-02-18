#include <bits/stdc++.h>
#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)
using ll = long long;


int max_three(int a, int b, int c)
{
	return max( max(a, b) , c );
}

int min_three(int a, int b, int c)
{
	return min( min(a, b) , c );
}

using namespace std;
using ll = long long;

// int maxProduct(vector<int>& nums) {

// 	int max_ans = nums[0];

// 	int max_till = nums[0];
// 	int min_till = nums[0];

// 	for (int i = 1; i < nums.size() ; i++)
// 	{
// 		int temp = max_till;
// 		max_till = max_three( max_till * nums[i] , nums[i] , min_till * nums[i] );
// 		min_till = min_three( temp * nums[i] , nums[i] , min_till * nums[i] );
// 		if (max_ans < max_till) max_ans = max_till;

// 	}

// 	return max_ans;

// }

int numSubarrayProductLessThanK(vector<int>& nums, int k)
{

	int count = 0;

	int pt1 = 0;
	int pt2 = 0;

	int product = 1;

	// while (pt1 <= nums.size())
	// {
	// 	int product = product * nums[pt2];

	// 	cout << product << " ";

	// 	if (product < 100)
	// 	{
	// 		if (pt2 == nums.size() - 1)
	// 		{
	// 			product = 1;

	// 			pt1++;
	// 			pt2 = pt1;
	// 		}
	// 		count++;
	// 		pt2++;
	// 	}
	// 	else
	// 	{
	// 		product = 1;
	// 		pt1++;
	// 		pt2 = pt1;
	// 	}
	// }

	cout << endl;

	return count;

}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<int> nums = { 10, 5, 2, 6};
	int k = 100;
	cout << numSubarrayProductLessThanK(nums , k);


}



















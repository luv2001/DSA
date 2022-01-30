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



void sortColors(vector<int>& nums) {

	int low = 0;
	int mid = 0;
	int high = nums.size() - 1;

	while (mid <= high)
	{
		if (nums[mid] == 0)
		{
			swap(nums[low] , nums[mid]);
			low++;
			mid++;
		}
		else if (nums[mid] == 1)
		{
			mid++;
		}
		else
		{
			swap(nums[mid] , nums[high]);
			high--;
		}
	}

	cout << low << mid << high << endl;


	for (auto it : nums)
	{
		cout << it << " ";
	}


}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<int> nums = {2, 0, 2, 1, 1, 0, 0, 0, 1};

	sortColors(nums);



}



















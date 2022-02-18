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

int findTargetSumWaysArray(vector<int>& nums, int N , int D )
{
	int sum = 0;

	if (D < 0) {D = D * (-1); }

	rep(i, N) sum = sum + nums[i];

	if ((sum + D) % 2 == 0)
	{
		sum = (sum + D) / 2;
		int t[N + 1][sum + 1];

		rep(i, N + 1)
		{
			t[i][0] = 1;
		}

		for (int j = 1 ; j < sum + 1 ; j++)
		{
			t[0][j] = 0;
		}


		for (int i = 1; i < N + 1 ; i++)
		{
			for (int j = 1 ; j < sum + 1 ; j++)
			{
				if (nums[i - 1] <= j)
				{
					t[i][j] = t[i - 1][j - nums[i - 1]] + t[i - 1][j];
				}
				else
				{
					t[i][j] = t[i - 1][j];
				}
			}
		}



		return t[N][sum];


	}
	else
	{
		return 0;
	}

}

int findTargetSumWays(vector<int>& nums, int sum )
{
	int N = nums.size();
	return findTargetSumWaysArray(nums , N , sum);
}



int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<int> nums = {1, 2, 1};

	int sum  = 0;
	cout << findTargetSumWays(nums , sum) << endl;


// [7,9,3,8,0,2,4,8,3,9]
// 0

}



















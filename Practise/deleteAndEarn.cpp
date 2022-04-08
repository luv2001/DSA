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


long long minimalKSum(vector<int>& nums, int k) {

	long long currentMin = 1;
	ll sum = 0;

	sort(nums.begin(), nums.end());

	for (int i = 0 ; i < nums.size() ; i++)
	{
		if (k == 0) break;


		if (nums[i] > currentMin && ( currentMin != nums[i - 1] && i > 0 ))
		{
			cout << currentMin << " ";
			sum = sum + currentMin;
			k--;
			currentMin++;
		}
	}

	return sum;

}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


	c;


	// vector<int> nums = {2, 4, 5};
	// int k = 2;

	// cout << minimalKSum(nums, k);

}




















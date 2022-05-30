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



int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// vector<int> nums = {2, 1, 5, 6, 2, 3, 1};

	// int n = arr.size();


	// vector<int> lse(n , 0);

	// stack<int> st;

	// for (int i = 0 ; i < n ; i++)
	// {
	// 	while (!st.empty() && st.top() <= arr[i])
	// 	{
	// 		st.pop();
	// 	}

	// 	if (st.empty())
	// 	{
	// 		lse[i] = 0;
	// 		st.push();f
	// 	}
	// // }

	// int set_bit_no;

	// int xor1 = 10;



	// set_bit_no = xor1 & ~(xor1 - 1);



	// // cout << set_bit_no;

	vector<int> nums = {4, 3, 6, 2, 1, 1};

	int res = 0;
	for (auto it : nums) res ^= it;
	for (int i = 1 ; i <= nums.size() ; i++) res ^= i;

	int lastBit =  ffs(res);

	int x = 0 , y = 0;

	int n = nums.size();
	int set_bit_no = ffs(res);

	for (int i = 0; i < n; i++) {
		if (nums[i] & set_bit_no)
			/* nums[i] belongs to first set */
			x = x ^ nums[i];

		else
			/* nums[i] belongs to second set */
			y = y ^ nums[i];
	}

	for (int i = 1; i <= n; i++) {
		if (i & set_bit_no)
			/* i belongs to first set */
			x = x ^ i;

		else
			/* i belongs to second set */
			y = y ^ i;
	}


	cout << x << " " << y << endl;



}



















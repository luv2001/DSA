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

int removeDuplicates(vector<int>& nums) {

	int pt1 = 0;
	int pt2 = 0;

	vector<int> v;
	vector<int> freq;

	v.push_back(nums[0]);

	while (pt2 <= nums.size())
	{
		if (nums[pt1] == nums[pt2])
		{
			pt2++;
		}
		else
		{
			if (pt2 != nums.size()) v.push_back(nums[pt2]);

			if (pt2 - pt1 > 2)
			{
				freq.push_back(2);
			} else freq.push_back(pt2 - pt1);
			pt1 = pt2;
		}
	}



	vector<int> ans;

	for (int i = 0 ; i < v.size() ; i++)
	{
		if (freq[i]  == 2)
		{
			ans.push_back(v[i]);
			ans.push_back(v[i]);
		}
		else
			ans.push_back(v[i]);

	}

	for (auto it : freq) cout << it << " ";
	cout << endl;

	for (auto it : v) cout << it << " ";
	cout << endl;

	for (auto it : ans) cout << it << " ";
	cout << endl;


	return ans.size();

}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<int> nums = {8, 8, 8};

	cout << removeDuplicates(nums) << endl;


}



















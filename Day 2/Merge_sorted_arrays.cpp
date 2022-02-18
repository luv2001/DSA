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

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {


	if (nums2.size() == 0)
	{
		for (auto it : nums1)
		{
			cout << it << " ";
		}
	}
	else
	{
		int pt1 = 0;
		int pt2 = 0;

		while (pt1 != nums1.size())
		{
			if (nums1[pt1] == 0)
			{
				swap(nums1[pt1] , nums2[pt2]);
				pt1++;
				pt2++;
			}
			else if (nums1[pt1] < nums2[pt2]) {
				pt1++;
			}
			else if (nums1[pt1] > nums2[pt2]) {
				swap(nums1[pt1], nums2[pt2]);
				sort(nums2.begin(), nums2.end());
				pt1++;
			}
			else
			{
				pt1++;
			}

		}

		for (auto it : nums1) {cout << it << " ";}


	}





}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<int> nums1 = {4, 5, 6, 0, 0, 0};
	int m = 3;

	vector<int> nums2 = {1, 2, 3};
	int n = 3;

	merge(nums1, m, nums2, n);


}



















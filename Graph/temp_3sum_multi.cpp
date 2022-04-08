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

const int M = 1e9 + 7;

int nCr(int n , int r)
{
	if (r > n) return 0;
	if ( r == 0  || n == r) return 1;

	else
		return (nCr(n - 1, r - 1) % M  + nCr(n - 1, r) % M ) % M;
}

int threeSumMulti(vector<int>& nums, int target) {

	unordered_map<int, int> freq;

	for (auto it : nums) freq[it]++;

	// for (auto it : freq)
	// {
	// 	cout << it.first << " -->  ";
	// 	for (auto it2 : freq)
	// 	{

	// 		cout << it2.first << " ";
	// 	}
	// 	cout << endl;
	// }

	cout << freq.count(29);


	return 0;



}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<int> nums = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5};
	int target = 8;

	cout << threeSumMulti(nums , target);





}

[1, 2, 2, 1]
[1, 2]
[1]
[1, 2, 3, 4, 1]
[1, 2, 1]
[2, 2]
[1, 2, 2, 2, 1]
[1, 2, 1, 1]



















#include <bits/stdc++.h>
#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)3
using ll = long long;


using namespace std;
using ll = long long;

int kthSmallest(int arr[], int l, int r, int k) {

	map<int, int> mp;

	rep(i, r + 1)
	{
		mp[arr[i]]++;
	}

	int Number = 0;
	int i = 0;
	for (auto it : mp)
	{
		if (i == 3)
		{
			Number = it.first;
		}
		i++;
	}

	return Number;

}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


	int arr[] = {7, 10, 4 , 20, 15};
	int r = sizeof(arr) / sizeof(arr[0]);
	int k = 4;

	cout << kthSmallest(arr, 0, r - 1, k);




}



















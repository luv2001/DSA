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


long f(int n , int k , vector<int> arr)
{
	if ( k == 0)
	{

		return 1;
	}
	if (n == 0)
	{
		if (k % arr[0] == 0) return 1;
		else return 0;
	}

	int take = 0;
	int notTake = f(n - 1 , k , arr);

	if (arr[n] <= k) take = f(n  , k - arr[n] , arr);
	return take + notTake;
}

long countWaysToMakeChange(vector<int> arr, int n, int k)
{
	return f(n - 1 , k , arr);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<int> arr = {1 , 2};
	int n  = 2;
	int k = 4;

	cout <<  countWaysToMakeChange(arr , n , k) << endl;



}



















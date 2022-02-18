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

int cnt = 0;

bool isSubsetSum(int N, int arr[], int sum) {
	if (N == 0 || sum == 0)
	{
		cnt++;
		return 0;
	}
	else if (N == 1)
	{
		if (sum == arr[0])
		{
			cnt++;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (sum >= arr[N - 1])
	{
		return max( isSubsetSum(N - 1, arr, sum - arr[N - 1]) , isSubsetSum(N - 1, arr, sum) );
	}
	else
	{
		return isSubsetSum(N - 1, arr, sum);
	}

}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N = 4;
	int arr[] = {0, 1, 2, 3};
	int sum = 3;

	isSubsetSum(N, arr, sum);
	cout << cnt << endl;


}



















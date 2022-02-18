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


int subsetSum(int arr[], int n, int sum)
{
	int t[n + 1][sum + 1];
	rep(i, n + 1)
	{
		t[i][0] = 1;
	}

	for (int j = 1 ; j <= sum ; j++)
	{
		t[0][j] = 0;
	}

	for (int i = 1 ; i < n + 1 ; i++)
	{
		for (int j = 1; j < sum + 1 ; j++)
		{
			if (arr[i - 1] <= j && arr[i - 1] != 0)
			{
				t[i][j] =  max(t[i - 1][j]  , t[i - 1][j - arr[i - 1]] ) ;
			}
			else
			{
				t[i][j] = t[i - 1][j] ;
			}
		}
	}


	return  t[n][sum] ;

}


int minDifference(int arr[], int n)  {

	int sum = 0;
	rep(i, n) sum = sum + arr[i];
	int ans = 0;

	int starter = 0;

	if (sum % 2 != 0) starter = 1;


	for (int i = sum / 2 + starter ; i <= sum ; i++)
	{

		if (subsetSum(arr, n, i))
		{

			ans =  i * 2 - sum;
			break;
		}
	}

	return ans;


}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N = 4;
	int arr[] = {1, 6, 11, 5};


	cout << minDifference(arr, N);


}



















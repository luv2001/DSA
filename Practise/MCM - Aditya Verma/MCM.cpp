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

int t[101][101];


int MCM(int arr[] , int i , int j)
{
	if (t[i][j] != -1) {return t[i][j];}
	if (i >= j) return 0;

	int ans = INT_MAX;
	for (int k = i ; k <= j - 1; k++)
	{
		int temp = MCM(arr, i, k) + MCM(arr, k + 1, j) + arr[i - 1] * arr[k] * arr[j];

		if (temp < ans) ans = temp;
	}

	t[i][j] = ans;
	return ans;

}

int matrixMultiplication(int N, int arr[])
{
	int i = 1;
	int j = N - 1;

	rep(i, 102)
	{
		rep(j, 102) t[i][j] = -1;
	}
	return MCM(arr, i, j);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


	int N;
	cin >> N;
	int arr[N];

	rep(i, N)
	{
		int x;
		cin >> x;
		arr[i] = x;
	}



	cout << matrixMultiplication(N, arr) << endl;





}



















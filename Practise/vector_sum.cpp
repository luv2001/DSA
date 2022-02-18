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

vector<int> ans;

void subsetSums(int arr[] , int n)
{
	int m = pow(2, n);
	int sum = 0;



	for (int i = 0 ; i < m ; i++)
	{
		for (int j = 0 ; j < n ; j++)
		{
			if (  ((1 << j) & i) )
			{
				sum += arr[j];
			}
		}
		ans.push_back(sum);
		cout << endl;
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N = 3;
	int arr[] = {10, 4, 5};

	subsetSums(arr, N);

	for (auto it : ans) cout << it << " ";


}



















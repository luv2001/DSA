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


int select(int arr[], int n)
{
	int min = arr[0];
	int index = 0;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			index = i;
		}
	}

	return index;
}

void selectionSort(int arr[], int n)
{

	rep(i, n)
	{
		int index = select(arr, n - i);

		cout << arr[index] << " ";

		for (int i = index; i < n; i++)
		{
			arr[i] = arr[i + 1];
			if (i == n - 1)
			{
				arr[i] = INT_MAX;
			}
		}

	}




}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int arr[] = {4, 3, 1, 9, 7};
	int arrSize = sizeof(arr) / sizeof(arr[0]);

	selectionSort(arr, arrSize);


}



















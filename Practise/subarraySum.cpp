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

vector<int> subarraySum(int arr[], int n, long long s)
{
	int left = 0;
	int right = 0;
	long long currentSum = 0;

	vector<int> ans = { -1};


	while (left <= right && left != n - 1)
	{
		if (currentSum == s)
		{
			ans = {};
			ans.push_back(left);
			ans.push_back(right - 1);
			break;
		}
		else if (currentSum < s)
		{
			currentSum = currentSum + arr[right];
			right++;
		}
		else if (currentSum > s)
		{
			currentSum =  currentSum - arr[left];
			left++;
		}
		else
		{
			left++;
		}
	}

	return ans;




}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	long long s = 12;
	int n = 5;
	int arr[] = {1, 2, 3, 7, 5};

	vector<int> print = subarraySum(arr, n, s);

	for (auto it : print)
	{
		cout << it << " ";
	}


}



















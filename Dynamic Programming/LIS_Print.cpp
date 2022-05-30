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

struct TreeNode
{
	int data;
	struct TreeNode* left;
	struct TreeNode* right;

	TreeNode(int val)
	{
		data = val;
		left = right = NULL;
	}

};

void printLCS(vector<int> arr)
{
	int n = arr.size();

	vector<int> dp(n , 1) , prevIndex(n , 0);

	int maxValue = 0;
	int  lastIndex;

	for (int i = 1 ; i < n ; i++)
	{
		for (int j = 0 ; j < i ; j++)
		{
			if (arr[j] < arr[i] && dp[i] < dp[j] + 1)
			{
				dp[i] = dp[j] + 1;
				if (dp[i] > maxValue)
				{
					maxValue = dp[i];
					lastIndex = i;
				}
				prevIndex[i] = j;
			}
		}
	}


	while (prevIndex[lastIndex] != lastIndex)
	{
		cout << arr[lastIndex] << " ";
		lastIndex = prevIndex[lastIndex];
	}

	cout << arr[lastIndex] << endl;


	// printVec(dp);
	// printVec(prevIndex);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<int> arr = {1, 7, 8, 4, 5, 6, -1, 9};

	printLCS(arr);

}



















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

vector<int> spiralOrder(vector<vector<int>>& a) {

	int n = matrix.size();

	int top = 0 , down = n - 1 , left = 0 , right = n - 1;
	vector<int> ans;

	while (top <= down && left <= right)
	{
		for (int i = left ; i <= right ; i++)
		{
			ans.push_back(a[top][i]);
		}

		top++;

		for (int i = top ; i <= down ; i++)
		{
			ans.push_back(a[i][right]);
		}

		right--;

		for (int i = right ; i >= left ; i--)
		{
			ans.push_back(a[down][i]);
		}

		down--;

		for (int i = down ; i >= top ; i--)
		{
			ans.push_back(a[i][left]);
		}
		left++;

	}

	return ans;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);




}



















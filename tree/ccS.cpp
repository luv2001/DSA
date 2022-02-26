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

/*

*/

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

ll solve(string x)
{
	ll n = x.length();

	char check_char = x[n - 1];

	for (int i = 0 ; i < n - 1 ; i++)
	{
		if (check_char  == x[i])
		{
			string y = x.substr(i, n - i);

			string y_copy = y;
			reverse(y_copy.begin(), y_copy.end());

			if (y_copy == y)
			{
				return n - y.length();
			}
			else
			{
				// cout << y << endl;

				ll pt1 = 0;
				ll pt2 = y.length() - 1;
				ll count_check = 0;

				while (pt1 <= pt2)
				{
					if (y[pt1] == y[pt2])
					{
						count_check++;
						pt1++;
						pt2--;
					}
					else
					{
						break;
					}

				}

				if (count_check == 1)
				{
					return n - 1;
				}
				else
				{
					return n - count_check - 1;
				}
			}



		}
		else
		{
			if (i == n - 2)
			{
				return n - 1;
			}
			continue;
		}
	}

	cout << endl;
	return -10;


}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	ll t;
	cin >> t;
	while (t--)
	{

		string x;
		cin >> x;
		cout << solve(x) << endl;
	}




}



















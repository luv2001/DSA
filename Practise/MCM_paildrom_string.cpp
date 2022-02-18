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

int d = 0;

int t[501][501];

int MCM_paildrom(string s , int i , int j)
{
	d++;
	string x = s.substr(i, j - i + 1);
	string y = x;
	reverse(x.begin(), x.end());

	if (t[i][j] != -1)
	{
		return t[i][j];
	}

	else if (i >= j) return 0;
	else if (y == x) return 0;
	else
	{
		int ans = INT_MAX;

		for (int k = i ; k < j ; k++)
		{

			int left , right;

			if (t[i][k] != -1)
				left = t[i][k];
			else left = MCM_paildrom(s, i, k);

			if (t[k + 1][j] != -1)
				right = t[k + 1][j];
			else right = MCM_paildrom(s, k + 1, j);

			int temp = 1 + left + right;
			if (temp < ans) ans = temp;
		}

		t[i][j] = ans;
		return ans;

	}


}

int minPattitionPaildrom(string s, int N)
{

	int i = 0;
	int j = N - 1;

	rep(i, N + 1)
	{
		rep(j , N + 1)
		{
			t[i][j] = -1;
		}
	}

	return MCM_paildrom( s , i , j);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string s = "ababbbabbababa";


	int N = s.length();

	cout << minPattitionPaildrom(s, N) << endl << d << "   ";




}



















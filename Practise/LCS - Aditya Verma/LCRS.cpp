#include <bits/stdc++.h>
#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)
#define push_back pb
using ll = long long;


using namespace std;
using ll = long long;

int LCSR(string x)
{
	string y = x;
	int n = x.length();

	int t[n + 1][n + 1];

	rep(i, n + 1)
	{
		rep(j, n + 1)
		{
			if (i == 0 || j == 0)
			{
				t[i][j] = 0;
			}
			else if (x[i - 1] == y[j - 1] && (i != j))
			{
				t[i][j] = 1 + t[i - 1][j - 1];
			}
			else
			{
				t[i][j] = max(t[i - 1][j] , t[i][j - 1]);
			}
		}
	}

	return t[n][n];

}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string s = "AAWBBEDGHKD";
	cout << LCSR(s) << endl;


}



















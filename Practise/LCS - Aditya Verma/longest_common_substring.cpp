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

int longestCommonSubstr (string x, string y, int n, int m)
{
	if (n == 0 || m == 0)
	{
		return 0;
	}
	else if (x[n - 1] == y[m - 1])
	{
		return 1 + longestCommonSubstr(x, y, n - 1, m - 1);
	}
	else
	{
		longestCommonSubstr(x, y, n - 1, m - 1);
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string s1 = "ABCDGH";
	string s2 = "ACDGHR";
	cout << longestCommonSubstr(s1 , s2 , s1.length() , s2.length()) << endl;



}



















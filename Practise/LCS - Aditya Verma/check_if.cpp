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

bool isSubSequence(string x, string y)
{
	long long n = x.size();
	long long m = y.size();

	cout << n << "   " << m << endl;
	long long t[n][m];

	bool ans = 0;

	long long pt1 = 0;
	long long pt2 = 0;

	while (pt1 < n && pt2 < m)
	{
		if (x[pt1] == y[pt2])
		{
			pt1++;
			pt2++;
		}
		else
		{
			pt2++;
		}
	}

	cout << pt1 << endl;

	return ans;



}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string x = "cmk";
	string y = "cwzmack";

	cout << isSubSequence(x, y) << endl;


}



















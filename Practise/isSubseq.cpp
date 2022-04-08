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

bool isSubsequence(string s, string t) {

	int n = s.length();
	int m = t.length();

	int pt1 = 0;
	int pt2 = 0;


	while (pt2 < m)
	{
		if (s[pt1] == t[pt2])
		{
			pt1++;
			pt2++;
		}
		else
		{
			pt2++;
		}
	}



	if (pt1 == n )
	{
		return true;
	} else return false;

}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string s = "xyz";
	string t = "sasxhbhdjzyhbajh";


	cout << isSubsequence(s, t) << endl;


}



















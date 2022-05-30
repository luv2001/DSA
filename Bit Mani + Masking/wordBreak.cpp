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

// https://leetcode.com/problems/word-break-ii/discuss/1702127/C%2B%2B-easy-to-understand-recursion

bool isPresent(int i , int j , string s , vector<string>& D)
{
	string x;
	for (int idx = i ; idx <= j ; idx++) x += s[idx];

	return find(D.begin(), D.end() , x) != D.end();
}

int f(int idx , string s , vector<string>& D )
{
	if (idx == s.length()) return 0;

	int cnt = 0;

	for (int i = idx ; i < s.length() ; i++)
	{
		if (isPresent(idx , i , s , D))
		{
			cnt++;
			return f(i + 1 , s , D);
		}
	}

	if (cnt == 0) return -1;
	else return 0;
}

bool wordBreak(string s, vector<string>& D) {

	return f(0 , s, D) == 0;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int k = -3;
}



















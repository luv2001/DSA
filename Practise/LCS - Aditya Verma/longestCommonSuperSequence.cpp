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

string LCS(string x , int n , string y , int m)
{
	int t[n + 1][m + 1];

	rep(i, n + 1)
	{
		rep(j, m + 1)
		{
			if (i == 0 || j == 0)
			{
				t[i][j] = 0;
			}
			else if (x[i - 1] == y[j - 1])
			{
				t[i][j] = 1 + t[i - 1][j - 1];
			}
			else
			{
				t[i][j] = max( t[i - 1][j] , t[i][j - 1]);
			}
		}
	}

	int i = n;
	int j = m;
	string s = "";

	while (i > 0 && j > 0)
	{
		if (x[i - 1] == y[j - 1])
		{
			s.push_back(x[i - 1]);
			i--;
			j--;
		}
		else
		{
			if (t[i - 1][j] > t[i][j - 1])
			{
				s.push_back(x[i - 1]);
				i--;
			}
			else
			{
				s.push_back(y[j - 1]);
				j--;
			}
		}
	}


	while (i > 0)
	{
		s.push_back(x[i - 1]);
		i--;
	}

	while (j >  0)
	{
		s.push_back(y[j - 1]);
		j--;
	}
	reverse(s.begin(), s.end());
	return s;

}


// "aadadaad"

string shortestCommonSupersequence(string str1, string str2) {

	return LCS(str1 , str1.length() , str2 , str2.length());



}
// "cdzmk"
// "alcsm"
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// string str1 = "cdzmokq";
	// string str2 = "acsmeuk";
	// cout << shortestCommonSupersequence(str1, str2) << endl;

	unordered_map<int, int> mp;

	string s = "loveleetcode";

	rep(i, s.length()) mp[s[i]]++;

	for (auto it : mp)
	{
		cout << it.first << " " << it.second << " " << endl;
	}

}



















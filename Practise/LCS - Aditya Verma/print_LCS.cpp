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

int findLongestCommonSubstring(string x, string y)
{
	int n = x.length();
	int m = y.length();

	int t[n + 1][m + 1];

	std::vector<int> idx ;
	std::vector<int> idx_y ;

	for (int i = 0 ; i < n + 1 ; i++)
	{
		for (int j = 0 ; j < m + 1 ; j++)
		{
			if (i == 0 || j == 0)
			{
				t[i][j] = 0;
			}
			else if (x[i - 1] == y[j - 1])
			{
				if (find( idx.begin(), idx.end() , i - 1) == idx.end())
				{
					idx.push_back(i - 1);
				}

				if (find( idx_y.begin(), idx_y.end() , j - 1) == idx_y.end())
				{
					idx_y.push_back(j - 1);
				}



				t[i][j] = 1 + t[i - 1][j - 1];
			}
			else
			{
				t[i][j] = max( t[i - 1][j] ,  t[i][j - 1] );
			}
		}
	}

	for (auto it : idx) cout << it << " ";
	cout << endl;
	for (auto it : idx_y) cout << it << " ";
	cout << endl;

	string s;
	for (int i = 0; i < idx.size() ; i++)
	{
		s.push_back(x[idx[i] - 1]);
	}

	return t[n][m];
}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cout << findLongestCommonSubstring("ABABC" , "BABCA") << endl;


}



















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

int LCS(string x , int n, string y , int m)
{


	int t[n + 1][m + 1];
	for (int i = 0; i < n + 1 ; i++)
	{
		for (int j = 0; j < m + 1 ; j++)
		{
			if (i == 0  || j == 0)
			{
				t[i][j] = 0;
			}
			else if (x[i - 1] == y[j - 1])
			{
				t[i][j] = 1 + t[i - 1][j - 1];
			}
			else
			{
				t[i][j] = 0;
			}
		}
	}

	int t_max = 0;

	// rep(i, n + 1)
	// {
	// 	rep(j, m + 1)
	// 	{
	// 		cout << t[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	int i_max = 0;
	int j_max = 0;

	rep(i, n + 1)
	{
		rep(j, m + 1)
		{
			if (t[i][j] > t_max)
			{
				i_max = i;
				j_max = j;
			}
			t_max = max(t_max , t[i][j]);
		}
	}



	string s;

	while (t[i_max][j_max] != 0)
	{
		s.push_back(x[i_max - 1]);
		i_max--;
		j_max--;
	}

	reverse(s.begin(), s.end());



	// while (i + j > 1)
	// {
	// 	if (x[i - 1] ==  y[j - 1])
	// 	{
	// 		s.push_back(x[i - 1]);
	// 		i--;
	// 		j--;
	// 	}
	// 	else if (t[i - 1][j] == t[i - 1][j - 1] == t[i][j - 1])
	// 	{
	// 		i--;
	// 		j--;
	// 	}
	// 	else
	// 	{
	// 		int max_d = max( max(t[i - 1][j - 1] , t[i][j - 1]) , t[i - 1][j] );

	// 		if (max_d == t[i - 1][j - 1])
	// 		{
	// 			i--;
	// 			j--;
	// 		}
	// 		else if (max_d == t[i - 1][j])
	// 		{
	// 			i--;
	// 		}
	// 		else
	// 		{
	// 			j--;
	// 		}
	// 	}
	// }



	cout << s << endl;

	return t[n][m];
}




int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string x = "ABABC";
	string y = "BABCA";


	cout << LCS(x, x.length(), y, y.length()) << endl;


}



















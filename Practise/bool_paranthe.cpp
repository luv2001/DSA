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



char afterOpr(char a , char opr , char b)
{
	int a_int = 0;
	int b_int = 0;

	if (a == 'T')  a_int = 1;
	if (b == 'T')  b_int = 1;

	if (opr == '|')
	{
		if ( (a_int | b_int) == 0 )
		{
			return 'F';
		}
		else
		{
			return 'T';
		}
	}
	else if (opr == '&')
	{
		if ( (a_int & b_int) == 0 )
		{
			return 'F';
		}
		else
		{
			return 'T';
		}
	}
	else
	{
		if ( (a_int ^ b_int) == 0 )
		{
			return 'F';
		}
		else
		{
			return 'T';
		}
	}

}

int solve(string s, int i, int j, char result)
{

	if (i > j || (j - i) % 2 == 1) return 0;
	else if (i == j)
	{
		if (s[i] == result)
		{
			return 1;
		}
		else
		{
			return 0;
		}

	}
	else if (j - i == 2)
	{
		char a = s[i];
		char b = s[j];
		char opr = s[i + 1];

		if (afterOpr(a, opr, b) == result)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		int ans = 0;
		for (int k = i ; k <= j - 2 ; k = k + 2)
		{
			int opr = s[k + 1];

			int t1 = solve(s, i, k, 'T');
			int f1 = solve(s, i, k, 'F');

			int t2 = solve(s, k + 2, j, 'T');
			int f2 = solve(s, k + 2, j, 'F');

			if (opr == '|')
			{
				if (result == 'T')
				{
					ans = ans + t1 * t2 + t1 * f2 + f1 * t2;
				}
				else
				{
					ans = ans + f1 * f2;
				}
			}
			else if (opr == '&')
			{
				if (result == 'T')
				{
					ans = ans + t1 * t2;
				}
				else
				{
					ans = ans + f1 * t2 + t1 * f2 + f1 * f2;
				}
			}
			else
			{
				if (result == 'T')
				{
					ans = ans + t1 * f2 + f1 * t2;
				}
				else
				{
					ans = ans + t1 * t2 + f1 * f2;
				}
			}
		}




		return ans;


	}


}


int countWays(int N, string s) {


	int result = 1;
	int i = 0;
	int j = N - 1;


	return solve( s , i , j , 'T');






}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


	string s = "T|F^F&T|F^F^F^T|T&T^T|F^T^F&F^T|T^F";

	int N = s.length();

	cout << countWays(N , s);







}



















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

int f(int i, int j , int m , int n)
{
	if (i >= m || j >= n) return 0;
	if (i == m - 1 && j == n - 1) return 1;

	int down = f(i + 1 , j , m , n);
	int left = f(i , j + 1 , m , n);

	return down + left;

}

int uniquePaths(int m, int n) {


	vector<int> next(n, 0) , cur(n, 0);


	for (int i = m - 1 ; i >= 0 ; i--)
	{
		for (int j = n - 1 ; j >= 0 ; j--)
		{
			if (i == m - 1 && j == n - 1) cur[j] =  1;
			else
			{
				int down = 0;
				int left = 0;
				if (i < m - 1) down = next[j];
				if (j < n - 1) left = cur[j + 1];
				cur[j] = down + left;
			}
		}
		next = cur;
	}

	return cur[0];

}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cout << uniquePaths(3, 7) << endl;



}



















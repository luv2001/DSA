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



int countN = 0;
int length;

void f(int sX , int sY , int eX , int eY , int n, int m , int cnt)
{
	if (sX < 0 || sY < 0 || sX >= n || sY >= m) return;
	if (sX == eX && sY == eY)
	{
		if (cnt == length) countN++;
		return;
	}

	f(sX - 1 , sY , eX , eY , n , m , cnt + 1);
	f(sX , sY + 1 , eX , eY , n , m , cnt + 1);
	f(sX , sY - 1 , eX , eY , n , m, cnt + 1);
	f(sX + 1 , sY , eX , eY , n , m, cnt + 1);

}


int uniquePathsIII(vector<vector<int>>& mat) {

	int n = mat.size();
	int m = mat[0].size();

	int startX , startY , endX , endY , obs = 0;

	for (int i = 0 ; i < n ; i++)
	{
		for (int j = 0 ; j < m ; j++)
		{
			if (mat[i][j] == -1) obs++;
			else if (mat[i][j] == 1) {
				startX = i;
				startY = j;
			}
			else if (mat[i][j] == 2)
			{
				endX = i;
				endY = j;
			}
			else
			{
				obs = obs;
			}
		}
	}

	length = n * m - obs;

	cout << startX << " " << startY << endl;
	cout << endX << " " << endY << endl;
	cout << length << endl;

	int cnt = 0;

	f(startX , startY , endX , endY , n , m , cnt);

	return countN;

}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


	// // [[1, 0, 0, 0], [0, 0, 0, 0], [0, 0, 0, 2]]

	// vector<vector<int>> mat = {{1, 0, 0, 0} , {0, 0, 0, 0}, {0, 0, 0, 2}};

	// cout << uniquePathsIII(mat) << endl;

	// double c = 1;
	// // c = c / 3;

	// cout << setprecision(2) << c;

	string x = "adf";

	int m = getStateFromString(x);


}



















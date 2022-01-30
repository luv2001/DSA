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

void setZeroes(vector<vector<int>>& matrix) {

	int j_size = matrix.size();
	int i_size = matrix[0].size();

	vector<int, int> myVec;

	rep (i, i_size)
	{
		rep (j, j_size)
		{
			if (matrix[i][j] == 0)
			{
				myVec.push_back({i, j});
			}
		}
	}

	for (auto it : myVec)
	{
		int x = it.first;
		int y = it.second;

		rep(i, i_size)
		{

		}
	}



}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<vector<int>> matrix = {{0, 1, 2, 0} , {3, 4, 5, 2} , {1, 3, 1, 5}};
	setZeroes(matrix);


}



















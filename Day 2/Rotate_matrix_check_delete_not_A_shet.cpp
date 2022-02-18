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

vector<vector<int>> rotateBy90(vector<vector<int>> matrix)
{



	for (int i = 0; i < matrix.size(); i++)
	{
		for (int j = i; j < matrix.size() ; j++)
		{
			swap(matrix[i][j] , matrix[j][i]);
		}
	}


	for (int i = 0; i < matrix.size(); i++)
	{
		for (int j = 0; j < matrix.size() / 2 ; j++)
		{
			swap(matrix[i][j] , matrix[i][matrix.size() - 1 - j]);
		}
	}



	return matrix;
}

bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {

	vector<vector<int>> rotate_1 = rotateBy90(mat);
	vector<vector<int>> rotate_2 = rotateBy90(rotate_1);
	vector<vector<int>> rotate_3 = rotateBy90(rotate_2);





	if (target == rotate_1 || target == rotate_2 || target == rotate_3)
	{
		return true;
	}
	else
	{
		return false;
	}


}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<vector<int>> mat = {{0, 0}, {1, 0}};
	vector<vector<int>> target = {{1, 0}, {0, 0}};

	cout << findRotation(mat, target);


}



















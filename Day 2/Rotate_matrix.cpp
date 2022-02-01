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



void rotate(vector<vector<int>>& matrix) {

	int n = matrix.size();





	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
			swap(matrix[j][i] , matrix[i][j]);
	}
	cout << endl << endl;


	for (int i = 0 ; i < matrix.size() ; i++)
	{
		for (int j = 0; j < matrix[0].size() / 2 ; j++)
		{
			swap(matrix[i][j] , matrix[i][matrix[0].size() - j - 1]);
		}
	}





}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<vector<int>> matrix = {{5, 1, 9, 11} , {2, 4, 8, 10} , {13, 3, 6, 7} , {15, 14, 12, 16}};

	rotate(matrix);


	// vector<vector<int>> print = {{1, 2, 3, 4} , {5, 6, 7, 8} , {9, 10, 11, 12}};

	// for (int i = 0 ; i < print.size() ; i++)
	// {
	// 	for (int j = 0; j < print[0].size() / 2 ; j++)
	// 	{
	// 		swap(print[i][j] , print[i][print[0].size() - j - 1]);
	// 	}
	// }







}



















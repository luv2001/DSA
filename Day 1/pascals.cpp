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

long long int nCr(int n, int r)
{
	long long int den = 1;
	long long int num = n;



	for (int i = 1; i <= r; i++)
	{
		den = den * i;
	}

	for (int i = 1; i < r; i++)
	{
		num = num * (n - i);
	}


	return num / den;
}

vector<int> pascalRowByn(int n)
{
	vector<int> ans;

	ans.push_back(1);


	if (n % 2 == 0)
	{
		for (int i = 1; i <= n / 2 ; i++)
		{
			ans.push_back(nCr(n, i));
		}

		for (int i = n / 2 - 1; i > 0  ; i--)
		{
			ans.push_back(ans[i]);
		}


	}
	else
	{
		for (int i = 1; i <= n / 2  ; i++)
		{
			ans.push_back(nCr(n, i));
		}

		for (int i = n / 2; i > 0  ; i--)
		{
			ans.push_back(ans[i]);
		}


	}

	ans.push_back(1);




	return ans;
}

vector<vector<int>> generate(int numRows) {

	vector<vector<int>> ans;

	if (numRows == 0)
	{
		return ans;
	}
	else if (numRows == 1)
	{
		ans = {{1}};
		return ans;
	}
	else if (numRows == 2)
	{
		ans = {{1} , {1, 1}};
		return ans;
	}
	else
	{
		ans.push_back({1});
		ans.push_back({1, 1});

		for (int i = 2 ; i < numRows; i++)
		{
			ans.push_back(pascalRowByn(i));
		}
		return ans;
	}

}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int numRows = 27;

	// vector<int> print =  pascalRowByn(numRows);

	// for (auto it : print)
	// {
	// 	cout << it << " ";
	// }


	vector<vector<int>> print = generate(numRows);

	for (auto it  : print)
	{
		for (auto ut : it)
		{
			cout << ut << " ";
		}
		cout << endl;
	}





}



















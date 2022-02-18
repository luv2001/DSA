#include <bits/stdc++.h>
#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)
#define pv(s) for(auto it : s) cout << it << " ";
using ll = long long;


using namespace std;
using ll = long long;

// void printParen(int n, vector<string> &ans , string &ds)
// {

// 	int count_open = 0, count_close = 0;
// 	rep(i, ds.length()) if (ds[i] == '(') count_open++;
// 	rep(i, ds.length()) if (ds[i] == ')') count_close++;

// 	if (ds.length() == 2 * n)
// 	{
// 		ans.push_back(ds);
// 		return;
// 	}


// 	if (count_open < 1)
// 	{
// 		ds.push_back('(');
// 		printParen(n, ans , ds);
// 		ds.pop_back();


// 	}


// 	ds.push_back(')');
// 	printParen(n, ans, ds);



// }

// vector<string> generateParenthesis(int n) {
// 	vector<string> ans;
// 	string ds;

// 	printParen(n , ans , ds);

// 	return ans;

// }


void myOwnQuestion(int n , vector<string> &v, string &s)
{
	if (s.length() == n)
	{
		v.push_back(s);
		return;
	}

	if (s.length() > n) return;

	s.push_back('(');
	myOwnQuestion(n, v, s);

	s.pop_back();
	s.push_back(')');

	myOwnQuestion(n, v, s);
	s.pop_back();



}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// int N = 2;
	// vector<string> s =  generateParenthesis(N);

	// cout << s.size() << endl;

	// pv(s);

	int N = 3;

	string s;
	vector<string> v;

	myOwnQuestion(N , v, s);

	pv(v);


}



















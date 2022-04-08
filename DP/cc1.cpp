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

// int scoreOfParentheses(string s) {

// 	cout << s << endl

// 	     if (s.length() == 2) return 1;


// 	stack<char> st;
// 	int length = s.length();

// 	std::vector<int> v;

// 	for (int i = 0 ; i < s.length() ; i++)
// 	{
// 		if (st.empty())
// 		{
// 			v.push_back(i);
// 		}


// 		if (s[i] == '(') st.push('(');
// 		else st.pop();


// 	}

// 	v.push_back(s.length());



// 	int ans = 0;

// 	if (v.size() == 2)
// 	{
// 		// cout << " --> 2 * " <<  s.substr(1, s.length() - 2) << endl;
// 		return 2 * scoreOfParentheses( s.substr(1, s.length() - 2));
// 	}
// 	else
// 	{
// 		for (int i = 0 ; i < v.size() - 1 ; i++)
// 		{
// 			// cout  << s.substr(v[i], v[i + 1]) << " + "  ;
// 			ans = ans + scoreOfParentheses(s.substr(v[i], v[i + 1]));
// 		}



// 		return ans;

// 	}

// }

int scoreOfParentheses(string s)
{
	if (s.length() == 2) return 1;

	stack<char> st;
	std::vector<int> v;

	for (int i = 0 ; i < s.length() ; i++)
	{
		if (st.empty())
		{
			v.push_back(i);
		}


		if (s[i] == '(') st.push('(');
		else st.pop();


	}

	v.push_back(s.length());

	if (v.size() == 2)
	{
		return 2 * scoreOfParentheses(s.substr(1 , s.length() - 2));
	}

	int ans = 0;

	for (int i = 0 ; i < v.size() - 1; i++)
	{
		// cout << s.substr(v[i] , v[i + 1] - v[i]);
		ans = ans + scoreOfParentheses(s.substr(v[i] , v[i + 1] - v[i]));
	}

	return ans;
}




int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string s = "()()()()()()()";

	cout << scoreOfParentheses(s);


}



















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

string simplifyPath(string path) {

	stack<char> st;
	int flag = 0;



	for (int i = 0 ; i < path.length() ; i++)
	{
		if (path[i] == '/')
		{
			if (st.empty() == true || flag == 0)
			{
				st.push('/');
			}

			else if (st.top() == '/')
			{
				st.pop();
				continue;
			}


			else if (flag == -1 || flag > 3)
			{
				st.push(path[i]);
			}
			else if (flag == 3)
			{
				st.pop();
				st.pop();
				st.pop();
			}
			else if (flag == 2)
			{
				st.pop();
				st.pop();
			}
			else
			{
				st.pop();
			}
		}

		else if (path[i] == '.')
		{
			st.push('.');
			flag++;
		}
		else
		{
			st.push(path[i]);
			flag = 0;
		}
	}

	string x;

	while (!st.empty())
	{
		x.push_back(st.top());
		st.pop();
	}

	reverse(x.begin(), x.end());


	return x;

}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cout << simplifyPath("/./../.../cry////home");


}



















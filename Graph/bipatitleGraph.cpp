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

bool dfs(int i , int parC , vector<int> &color , vector<int> adj[])
{
	color[i] = parC == -1 ? 0 : 1 - parC;

	for (auto it : adj[i])
	{
		if (color[it] == -1)
		{
			if ( dfs(it , color[i] , color , adj) == false) return false;
		}
		else if (color[it] == color[i]) return false;
	}

	return true;
}


bool isBipartite(int n, vector<int>adj[]) {

	vector<int> color(n, -1);

	for (int i = 0 ; i < n ; i++)
	{
		if (color[i] == -1)
		{
			if (dfs(i, -1 , color , adj) == false) return false;
		}
	}

	return true;

}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}



















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

void dfs(int i , vector<int> &vis, vector<int> adj[] , vector<int> &ans)
{
	ans.push_back(i);
	vis[i] = 1;

	for (auto it : adj[i])
	{
		if (!vis[it])
		{
			dfs(it , vis , adj , ans);
		}
	}

}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n , m;
	cin >> n >> m;

	vector<int> adj[n + 1];

	rep(i, m)
	{
		int u , v;
		cin >> u >> v;

		adj[u].push_back(v);
		adj[v].push_back(u);

	}

	vector<int> vis(n + 1 , 0);

	// dfs
	vector<int> ans;


	for (int i = 1 ; i <= n ; i++)
	{
		if (!vis[i])
		{
			dfs(i , vis , adj , ans);
		}
	}

	printVec(ans);


}



















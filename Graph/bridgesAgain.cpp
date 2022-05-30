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


void dfs(int node , int par , vector<int> &vis , vector<int> &tin , vector<int> &low , int &timer , vector<int> adj[])
{
	vis[node] = 1;
	tin[node] = low[node] = timer++;

	for (auto it : adj[node])
	{
		if (it == par) continue;

		if (!vis[it])
		{
			dfs(it , node , vis , tin , low , timer , adj);
			low[node] = min(low[node] , low[it]);

			if (low[it] >  tin[node])
			{
				cout << it << " " << node << endl;
			}

		}
		else low[node] = min(low[node] , tin[it]);
	}

}


void dfsTraversal(vector<int> adj[] , int n)
{
	vector<int> vis(n + 1);

	vector<int> tin(n + 1 , -1);
	vector<int> low(n + 1 , -1);

	int timer = 0;

	for (int i = 1 ; i <= n ; i++)
	{
		if (!vis[i])
		{
			dfs(i , -1 , vis, tin , low , timer , adj);
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

	for (int i = 0 ; i < m ; i++)
	{
		int u , v;
		cin >> u >> v;

		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	dfsTraversal(adj , n);




}



















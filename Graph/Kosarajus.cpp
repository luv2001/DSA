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

// 6 7
// 1 2
// 2 3
// 3 5
// 3 1
// 5 4
// 4 6
// 6 5

// vector<vector<int>> ans;


void dfs(int node , vector<int> &vis , vector<int> &topoSort , vector<int> adj[])
{
	vis[node] = 1;

	for (auto it : adj[node])
	{
		if (!vis[it])
		{
			dfs(it  , vis , topoSort , adj);
		}
	}

	topoSort.push_back(node);
}

void dfsT(int node , int par , vector<int> &ds, vector<int> &vis , vector<int> adj[])
{
	vis[node] = 1;
	ds.push_back(node);

	for (auto it : adj[node])
	{
		if (it == par) continue;
		if (!vis[it])
		{
			dfsT(it  , node , ds, vis , adj);
		}
	}

	ds.pop_back();
}

vector<vector<int>> kosaraju(vector<int> adj[] , int n)
{
	vector<int> vis(n + 1, 0);
	vector<vector<int>> ans;

	vector<int> topoSort;

	for (int i = 1 ; i <= n ; i++)
	{
		if (!vis[i])
		{
			dfs(i , vis , topoSort, adj);
		}
	}

	reverse(topoSort.begin(), topoSort.end());

	// transposing the graph
	vector<int> adj_T[n];

	for (int i = 0 ; i < n ; i++)
	{
		for (auto it : adj[i])
		{
			adj_T[it].push_back(i);
		}
	}

	vector<int> ds;
	vector<int> visT(n + 1, 0);


	for (auto it : topoSort)
	{
		if (!visT[it])
		{
			dfsT(it , -1, ds , visT , adj_T);
		}
	}


	return ans;
}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	vector<int> adj[n + 1];

	for (int i = 0 ; i < m ; i++)
	{
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
	}

	vector<vector<int>> ans = kosaraju(adj , n);



	for (auto it : ans)
	{
		printVec(it);
	}


}



















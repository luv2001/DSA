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


bool dfsHelp(int node , int par , vector<int> &vis , vector<int> &dfs , vector<int> adj[])
{
	vis[node] = 1;
	dfs[node] = 1;


	for (auto it : adj[node])
	{
		if (!vis[it])
		{
			if (dfsHelp(it , node, vis , dfs , adj))return true;
		}
		else
		{
			if (it != par && dfs[it] == 1) return true;
		}
	}

	dfs[node] = 0;
	return false;

}



bool isCyclic(int n, vector<int> adj[]) {
	vector<int> vis(n, 0);

	vector<int> dfs(n, 0);

	for (int i = 0 ; i < n ; i++)
	{
		if (!vis[i])
		{
			if (dfsHelp(i, -1, vis, dfs, adj)) return true;
		}
	}

	return false;
}

int findPar(int u , vector<int> &parent)
{
	if (u == parent[u]) return u;
	else return parent[u] = findPar(parent[u] , parent);
}

void Union(int u, int v, vector<int> &parent , vector<int> &rank)
{
	if (rank[u] < rank[v])
	{
		parent[u] = v;
	}
	else if (rank[u] > rank[v])
	{
		parent[v] = u;
	} else
	{
		parent[v] = u;
		rank[u]++;
	}
}


int spanningTree(int n, vector<vector<int>> adj[])
{


	priority_queue<pair<int, pair<int, int>> , vector<pair<int, pair<int, int>>> , greater<pair<int, pair<int, int>>>> edges;

	// priority_queue<pair<int, pair<int, int>>> edges;

	for (int i = 0 ; i < n ; i++)
	{
		for (auto it : adj[i])
		{
			// cout << it[1] << " " << i << " " << it[0] << endl;
			edges.push( {it[1] , {i , it[0]}});
		}
	}

	vector<int> rank(n , -1) , parent(n);
	for (int i = 0 ; i < n ; i++) parent[i] = i;


	int cost = 0;

	// while (!edges.empty())
	// {

	// 	cout << edges.top().first << " ";
	// 	edges.pop();

	// }



	while (!edges.empty())
	{
		int wt = edges.top().first;
		int u = edges.top().second.first;
		int v = edges.top().second.second;

		edges.pop();

		if (findPar(u, parent) != findPar(v , parent))
		{
			Union(u , v , parent , rank);
			cost += wt;
		}


	}


	return cost;

}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;

	cin >> n >> m;

	vector<vector<int>> adj[n];

	for (int i = 0 ; i < m ; i++)
	{
		int u, v, wt;
		cin >> u >> v >> wt;

		// cout << u << " " << v << " " << wt << endl;

		vector<int> t1, t2;
		t1.push_back(u);
		t1.push_back(wt);
		adj[v].push_back(t1);

		t2.push_back(v);
		t2.push_back(wt);


		adj[u].push_back(t2);
	}


	cout << spanningTree(n, adj) << endl;

}



















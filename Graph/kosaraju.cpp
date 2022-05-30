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





void dfs(int node , vector<int> &vis , stack<int> &s , vector<int> adj[])
{
	vis[node] = 1;

	for (auto it : adj[node])
	{
		if (!vis[it])
		{
			dfs(it , vis , s , adj);
		}
	}

	s.push(node);
}

void dfs1(int node , vector<int> &vis , vector<int> adj[])
{
	vis[node] = 1;

	for (auto it : adj[node])
	{
		if (!vis[it])
		{
			dfs1(it , vis , adj);
		}
	}

}

int kosaraju(int n, vector<int> adj[])
{
	vector<int> vis(n, 0);
	stack<int> s;

	for (int i = 0 ; i < n ; i++)
	{
		if (!vis[i]) dfs(i , vis , s , adj);
	}


	vector<int> trans[n];
	vector<int> visT(n, 0);

	for (int i = 0 ; i < n ; i++)
	{
		for (auto it : adj[i]) trans[it].push_back(i);
	}


	int ans = 0;
	while (!s.empty())
	{
		if (!visT[s.top()])
		{
			dfs1(s.top() , visT, trans);
			ans++;
		}

		s.pop();
	}

	return ans;
}
// void dfs(int node , vector<int> &vis , vector<int> &topo  , vector<int> adj[])
// {
// 	vis[node] = 1;

// 	for (auto it : adj[node])
// 	{
// 		if (!vis[it])
// 		{
// 			dfs(it , vis , topo , adj);
// 		}
// 	}

// 	topo.push_back(node);

// }

// void dfsr(int node, vector<int> &visr, vector<int> &ds , vector<vector<int>> &ans, vector<int> adjr[])
// {
// 	visr[node] = 1;

// 	ds.push_back(node);

// 	for (auto it : adjr[node])
// 	{
// 		if (!visr[it])
// 		{
// 			dfsr(it , visr , ds , ans  , adjr);
// 		}
// 		else
// 		{
// 			ans.push_back(ds);
// 		}
// 	}

// 	ds.pop_back();


// }

// vector<vector<int>> kosaraju(vector<int> adj[] , int n)
// {
// 	vector<int> vis(n + 1 , 0);
// 	vector<int> topo;

// 	for (int i = 1 ; i <= n ; i++)
// 	{
// 		if (!vis[i])
// 		{
// 			dfs(i, vis, topo, adj);
// 		}
// 	}

// 	reverse(topo.begin(), topo.end());

// 	// graph ulti direction

// 	vector<int> adjr[n + 1];

// 	for (int i = 1 ; i <= n ; i++)
// 	{
// 		for (auto it : adj[i])
// 		{
// 			adjr[it].push_back(i);
// 		}
// 	}


// 	vector<int> visr(n + 1, 0);

// 	printVec(visr);

// 	vector<int> ds;
// 	vector<vector<int>> ans;

// 	for (int i = 1 ; i <= n ; i++)
// 	{
// 		if (!visr[i])
// 		{
// 			dfsr(i, visr, ds , ans, adjr);
// 		}
// 	}


// 	return ans;
// }

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	vector<int> adj[n];

	for (int i = 0 ; i < m ; i++)
	{
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
	}

	cout << kosaraju(n , adj);



}



















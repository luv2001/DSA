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

// void bfs(int node , vector<int> &vis , vector<int> &ans , vector<int> adj[] , int n)
// {

// 	queue<int> q;

// 	vis[node] = 1;
// 	q.push(node);
// 	ans.push_back(node);

// 	while (!q.empty())
// 	{
// 		auto node = q.front();
// 		q.pop();

// 		for (auto it : adj[node])
// 		{
// 			if (!vis[it])
// 			{
// 				vis[it] = 1;
// 				q.push(it);
// 				ans.push_back(it);
// 			}
// 		}

// 	}
// }

// vector<int> bfsTraversal(vector<int> adj[] , int n)
// {
// 	vector<int> vis(n + 1 , 0);

// 	vector<int> ans;

// 	for (int i = 1 ; i <= n ; i++)
// 	{
// 		if (!vis[i])
// 		{
// 			bfs(i, vis, ans , adj, n);
// 		}
// 	}

// 	return ans;
// }

void dfs(int node , vector<int> &vis , vector<int> &ans , vector<int> adj[] , int n)
{
	vis[node] = 1;
	ans.push_back(node);

	for (auto it : adj[node])
	{
		if (!vis[it])
		{
			dfs(it, vis , ans , adj , n);
		}
	}

}

vector<int> dfsTraversal(vector<int> adj[] , int n)
{
	vector<int> vis(n + 1, 0);
	vector<int> ans;

	for (int i = 1 ; i <= n ; i++)
	{
		if (!vis[i])
		{
			dfs(i , vis , ans , adj , n);
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

	rep(i, m)
	{
		int u, v;
		cin >> u >> v;

		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	// vector<int> ans = bfsTraversal(adj, n);
	// printVec(ans);

	vector<int> ans = dfsTraversal(adj, n);
	printVec(ans);

}



















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

//https://leetcode.com/problems/is-graph-bipartite/submissions/

//bipatite using bfs
// bool bfs(int node , vector<int> &vis , int n , vector<vector<int>> adj)
// {
// 	vis[node] = 1; // blue

// 	queue<int> q;
// 	q.push(node);

// 	while (!q.empty())
// 	{
// 		int node = q.front();
// 		q.pop();

// 		for (auto it : adj[node])
// 		{
// 			if (!vis[it])
// 			{
// 				if (vis[node] == 2) vis[it] = 1;
// 				else vis[it] = 2;

// 				q.push(it);

// 			}
// 			else
// 			{
// 				if (vis[it] == vis[node]) return false;
// 			}
// 		}
// 	}

// 	return true;
// }
// bool isBipartite(vector<vector<int>>& adj) {

// 	int n = adj.size();

// 	vector<int> vis(n, 0);

// 	for (int i = 0 ; i < n ; i++)
// 	{
// 		if (!vis[i])
// 		{
// 			if (bfs(i, vis, n, adj) == false) return false;
// 		}
// 	}

// 	return true;
// }

//bipatite using dfs
// bool dfs(int node , int par , vector<int> &vis, vector<vector<int>> adj)
// {
// 	if (par == -1)
// 	{
// 		vis[node] = 1;
// 	}
// 	else
// 	{
// 		if (vis[par] == 1) vis[node] = 2;
// 		else vis[node] = 1;
// 	}

// 	for (auto it : adj[node])
// 	{
// 		if (!vis[it])
// 		{
// 			if (dfs(it, node, vis , adj) == false) return false;
// 		}
// 		else
// 		{
// 			if (vis[it] == vis[node]) return false;
// 		}
// 	}

// 	return true;
// }
// bool isBipartite(vector<vector<int>>& adj) {
// 	int n = adj.size();

// 	vector<int> vis(n, 0);

// 	for (int i = 0 ; i < n ; i++)
// 	{
// 		if (!vis[i])
// 		{
// 			if (!dfs(i, -1 , vis, adj)) return false;
// 		}
// 	}

// 	return true;
// }


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);




}



















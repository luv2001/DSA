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

// Cycle Using DFS and BFS

// BFS
bool bfs(int i, vector<int> &vis , vector<int> adj[])
{
	vis[i] = 1;

	queue<pair<int, int>> q;
	q.push({i, -1});

	while (!q.empty())
	{
		int node = q.front().first;
		int par = q.front().second;

		q.pop();

		for (auto it : adj[node])
		{
			if (!vis[it])
			{
				vis[it] = 1;
				q.push({it, node});
			}
			else if (it != par) return true;
		}
	}

	return false;

}

bool isCycle(int n, vector<int> adj[]) {

	vector<int> vis(n, 0);

	for (int i = 0 ; i < n ; i++)
	{
		if (!vis[i])
		{
			if (bfs(i , vis , adj)) return true;
		}
	}

	return false;
}

// DFS

bool dfs(int i , int par, vector<int> &vis , vector<int> adj[])
{
	vis[i] = 1;

	for (auto it : adj[i])
	{
		if (!vis[it])
		{
			if (dfs(it, i, vis, adj)) return true;
		}
		else if (par != it) return true;
	}

	return false;
}

bool isCycle(int n, vector<int> adj[]) {

	vector<int> vis(n, 0);

	for (int i = 0 ; i < n ; i++)
	{
		if (!vis[i])
		{
			if (dfs(i, -1 , vis, adj)) return true;
		}
	}

	return false;
}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);




}



















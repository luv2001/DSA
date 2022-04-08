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


// void saveCode()
// {
// 	for (int i = 1;  i <= n ; i++)
// 	{
// 		if (!vis[i])
// 		{
// 			queue<int> q;
// 			q.push(i);
// 			vis[i] = 1;

// 			while (!q.empty())
// 			{
// 				int node = q.front();
// 				q.pop();

// 				ans.push_back(node);


// 				for (auto it : adj[node])
// 				{
// 					if (!vis[it])
// 					{
// 						q.push(it);
// 						vis[it] = 1;
// 					}
// 				}
// 			}

// 		}
// 	}
// }

void bfs(int i, vector<int> &vis, vector<int> adj[], vector<pair<int, int>> &ans)
{
	if (!vis[i])
	{
		vis[i] = 1;

		queue<pair<int, int>> q;
		q.push({i, -1});

		while (!q.empty())
		{
			int node = q.front().first;
			int par = q.front().second;

			ans.push_back({node , par});

			q.pop();

			for (auto it : adj[node])
			{
				if (!vis[it])
				{
					vis[it] = 1;
					q.push({it, node});
				}

			}

		}

	}
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


	vector<int> vis(n + 1 , 0);

	vector<pair<int, int>> ans;


	for (int i = 1 ; i <= n ; i++)
	{
		bfs(i, vis, adj, ans);
	}


	for (auto it : ans)
	{
		cout << it.first << " " << it.second << endl;
	}


}



















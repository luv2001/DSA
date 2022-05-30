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

vector<int> shortestPath(vector<int> adj[] , int n , int source)
{
	vector<int> ans(n + 1, 0);

	vector<int> vis(n + 1, 0);

	queue<int> q;
	int cnt = 0;

	q.push(source);
	vis[source] = 1;
	ans[source] = 0;

	while (!q.empty())
	{
		int node = q.front();
		q.pop();




		for (auto it : adj[node])
		{
			if (!vis[it])
			{
				vis[it] = 1;
				ans[it] = ans[node] + 1;
				q.push(it);
			}
		}

	}

	return ans;


}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int m, n;
	cin >> n >> m;

	vector<int> adj[n + 1];

	for (int i = 0 ; i < m ; i++)
	{
		int u, v;
		cin >> u >> v;

		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	vector<int> ans =  shortestPath(adj , n , 0);

	printVec(ans);


}



















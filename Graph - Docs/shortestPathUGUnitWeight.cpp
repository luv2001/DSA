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


vector<int> shortestPathUG(vector<int> adj[] , int n , int source)
{
	vector<int> dist(n, INT_MAX);
	dist[source] = 0;


	queue<int> q;
	q.push(source);



	while (!q.empty())
	{
		int node = q.front();
		q.pop();

		for (auto it : adj[node])
		{
			if (dist[node] + 1 < dist[it])
			{
				dist[it] = min(dist[it] , dist[node] + 1);
				q.push(it);
			}
		}

	}


	return dist;
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

	vector<int> ans = shortestPathUG(adj , n , 2);
	printVec(ans);


}



















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

struct edges {
	int u, v, wt;

	edges(int first , int second , int weight) {
		u = first;
		v = second;
		wt = weight;
	}
};

vector<int> bellemanFord(vector<edges> graph , int n, int source)
{
	vector<int> dist(n , INT_MAX);
	dist[source] = 0;

	for (int i = 0 ; i < n ; i++)
	{
		for (auto it : graph)
		{
			if (dist[it.u] + it.wt <  dist[it.v])
			{
				dist[it.v] = dist[it.u] + it.wt;
			}
		}
	}

	vector<int> copy = dist;

	for (auto it : graph)
	{
		if (dist[it.u] + it.wt <  dist[it.v])
		{
			dist[it.v] = dist[it.u] + it.wt;
		}
	}

	if (copy != dist) cout << "Cycle" << endl;

	return dist;

}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n , m;

	cin >> n >> m;

	vector<edges> edge;

	for (int i = 0 ; i < m ; i++)
	{
		int u, v, wt;
		cin >> u >> v >> wt;

		edge.push_back(edges(u, v, wt));
	}

	vector<int> ans = bellemanFord(edge , n , 0);

	printVec(ans);


}



















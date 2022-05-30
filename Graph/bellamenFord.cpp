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

struct graph
{
	int u , v, wt;

	graph(int first , int second , int weight)
	{
		u = first;
		v = second;
		wt = weight;
	}
};

// 6 7
// 0 1 5
// 1 5 -3
// 1 2 -2
// 5 3 1
// 3 2 -6
// 2 4 -3
// 3 4 -2


vector<int> bellemenFord(vector<graph> edges , int n)
{
	vector<int> dist(n  , INT_MAX);
	dist[0] = 0;

	for (int i = 0 ; i < n - 1 ; i++)
	{
		for (auto it : edges)
		{
			if (dist[it.u] + it.wt < dist[it.v])
				dist[it.v] = dist[it.u] + it.wt;
		}
	}

	vector<int> distPrev = dist;

	for (auto it : edges)
	{
		if (dist[it.u] + it.wt < dist[it.v])
		{	cout << "-ve cycle";
			break;
		}
	}




	return dist;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// int n , m;
	// cin >> n >> m;



	// vector<graph> edges;

	// rep(i, m)
	// {
	// 	int u, v, wt;
	// 	cin >> u >> v >> wt;

	// 	edges.push_back(graph(u, v, wt));

	// }



	// vector<int> ans = bellemenFord(edges , n);


	// printVec(ans);

	vector<pair<int, int>> v;
	v.push_back({1, 2});

	// auto it = find(v.begin(), v.end(), {3, 4});


}



















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

void makeSet(int n , vector<int> &rank , vector<int> &par)
{
	for (int i = 1 ; i <= n ; i++)
	{
		par[i] = i;
		rank[i] = 0;
	}
}


int findPar(int node , vector<int> &par)
{
	if (node == par[node]) return node;
	return par[node] = findPar(par[node] , par);
}

void Union(int u , int v , vector<int> &par , vector<int> &rank)
{
	u = findPar(u, par);
	v = findPar(v , par);

	if (rank[u] < rank[v])
	{
		par[u] = v;
	}
	else if (rank[u] > rank[v])
	{
		par[v] = u;
	}
	else
	{
		par[v] = u;
		rank[u]++;
	}
}


int minCostConnectPoints(vector<vector<int>>& v) {

	int n = v.size();

	vector<int> keys(n , INT_MAX);
	keys[0] = 0;

	vector<bool> mst(n , false);
	vector<int> parent(n , -1);

	priority_queue<pair<int , vector<int>> , vector<pair<int , vector<int>>> , greater<pair<int , vector<int>>> > pq;

	pq.push({0 , {v[0][0] , v[0][1] , 0}});

	while (!pq.empty())
	{
		auto node = pq.top();
		pq.pop();

		int dist = node.first;

		mst[node.second[2]] = true;




	}

	return 1;

}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);





}



















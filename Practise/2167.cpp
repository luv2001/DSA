#include <bits/stdc++.h>
#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)
using ll = long long;


using namespace std;
using ll = long long;

int minSubarraySum(vector<int> v)
{
	int minSum = v[0];
	int temp = 0;

	for (int i = 0; i < v.size() ; i++)
	{
		temp = temp + v[i];

		if (temp < minSum)
		{
			minSum = temp;
			if (temp > 0)
			{
				temp = 0;
			}
		}
		else if (temp > minSum)
		{
			if (temp > 0)
			{
				temp = 0;
			}
			else
			{
				temp = temp;
			}
		}
		else
		{

			if (temp > 0)
			{
				temp = 0;
				minSum = temp;
			}
			minSum = minSum;

		}
	}
	return minSum;


}

int minimumTime(string s) {

	vector<int> v;

	rep(i, s.length())
	{
		if (s[i] == '1')
		{
			v.push_back(1);
		}
		else
		{
			v.push_back(-1);
		}
	}

	// for (auto it : v) cout << it << " ";
	// cout << endl;
	return  s.length() + minSubarraySum(v);


}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string s = "011001111111101001010000001010011";
	cout  << minimumTime(s);




}



















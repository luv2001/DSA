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

vector<vector<int>> transPose(vector<vector<int>> mat)
{
	int m = mat.size();
	int n = mat[0].size();

	vector<vector<int>> ans(n , vector<int> (m, 0));

	for (int i = 0 ; i < n ; i++)
	{
		for (int j = 0 ; j < m ; j++)
		{
			ans[i][j] = mat[j][i];
		}
	}


	return ans;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n = 3;

	vector<vector<int>> dp (vector<int> (n, 0));


	// vector<vector<int>> m = {{1, 2, 3} , {4, 5, 6}};

	// vector<vector<int>> T = transPose(m);

	// for (auto it : T)
	// {
	// 	printVec(it);
	// }

	// string s = "!@#$%^&*()   dcac"

}



// magnet: ? xt = urn : btih : 82EA36FC32572DADCC9C2E13B512BE20669D5DF7 & dn = Euphoria % 20US % 20S02E04 % 201080p % 20HEVC % 20x265 - MeGusta & tr = udp % 3A % 2F % 2Ftracker.coppersurfer.tk % 3A6969 % 2Fannounce & tr = udp % 3A % 2F % 2Ftracker.openbittorrent.com % 3A6969 % 2Fannounce & tr = udp % 3A % 2F % 2F9.rarbg.to % 3A2710 % 2Fannounce & tr = udp % 3A % 2F % 2F9.rarbg.me % 3A2780 % 2Fannounce & tr = udp % 3A % 2F % 2F9.rarbg.to % 3A2730 % 2Fannounce & tr = udp % 3A % 2F % 2Ftracker.opentrackr.org % 3A1337 & tr = http % 3A % 2F % 2Fp4p.arenabg.com % 3A1337 % 2Fannounce & tr = udp % 3A % 2F % 2Ftracker.torrent.eu.org % 3A451 % 2Fannounce & tr = udp % 3A % 2F % 2Ftracker.tiny - vps.com % 3A6969 % 2Fannounce & tr = udp % 3A % 2F % 2Fopen.stealth.si % 3A80 % 2Fannounce




// {
// 	"itemsPrice": 1200,
// "shiipingInfo": {
// "address": "54/469 Laxminagar",
// "city": "Baroda",
// "state": "Gujarat",
// "country": "India",
// 		"pinCode": 390023,
// 		"phoneNumber": 9133786533
// 	},

// "orderItems": [ {
// "name": "Knee Sleeves",
// 		"price": 1500,
// 		"quantity": 4,
// "image": "sample",
// "product": "629891f422bbc75102bfd82f"
// 	}],

// "paymentInfo": {
// "id": "sampleID",
// "status": "succeed"
// 	},

// 	"shippingPrice": 100,

// 	"taxPrice": 50,

// 	"totalPrice": 6000
// }











#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second

using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	int a, b, c, diff, max = 0, winner, temp, sc_1 = 0, sc_2 = 0;
	cin >> a;
	while (a--) {
		cin >> b >> c;
		sc_1 +=  b;
		sc_2 += + c;
		if (sc_1 > sc_2) {
			diff = sc_1 - sc_2; temp = 1;
		}
		else {
			diff = sc_2 - sc_1; temp = 2;
		}
		if (diff > max) {
			max = diff; winner = temp;
		}
	}
	cout << winner << " " << max;
	return 0;
}

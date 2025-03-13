#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <limits>
#include <climits>
#include <math.h>
#include <cmath>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <cstring>
#include <cmath>

using namespace std;

using ll = long long;
const int M = 1e9 + 7;
const int dx[4]{1,0,-1,0}, dy[4]{0,1,0,-1};

ll gcd(ll a, ll b){
    if (b == 0)
       return a;
    return gcd(b, a % b); 
}

template<class T> using pqg = priority_queue<T,vector<T>,greater<T>>;
ll lcm(ll a, ll b) { return (a * b) / gcd(a, b) ; }

using vi = vector<int>;
using dvi = vector<vector<int>>;
using vl = vector<ll>;
using dvl = vector<vector<ll>>;
using vc = vector<char>;
using dvc = vector<vector<char>>;
using vs = vector<string>;
using dvs = vector<vector<string>>;

#define sz(x) int((x).size())
#define all(x) begin(x), end(x)

using pi = pair<int, int>;
using pl = pair<ll, ll>;
#define makp make_pair
#define f first
#define s second

#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define ROF(i,a,b) for (int i = a; i >= (b); --i)
#define R0F(i,a) ROF(i,a,0)
#define each(a,x) for (auto& a: x)

// int N = 100005;
// vl v(N) , vis(N,0) , adj[100005];

// PRINT ALL THE DAMN EVENS FIRST, THEN ODDS, DON'T MAKE THIS UNNECESSARILY COMPLICATED

int main(){
	ll n;
	cin >> n;
	if(n == 2 || n == 3){
		cout << "NO SOLUTION\n";
		return 0;
	}
	for(int i = 2; i <= n; i+=2){
		cout << i << " ";
	} 
	for(int i = 1; i <= n; i+=2){
		cout << i << " ";
	} 
}

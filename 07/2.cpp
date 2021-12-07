#include<bits/stdc++.h>
using namespace std;

using ll = long long;

ll dp[2020];

int divide(int l){
	if(l == 0){
		return dp[0] = 0;
	}
	if(l == 1){
		return dp[1] = 1;
	}
	if(dp[l] != -1){
		return dp[l];
	}
	return dp[l] = divide(l - 1) + l;
}

void solve(){
	memset(dp, -1, sizeof dp);
	ll n, minn = 1e9, maxx = 0;
	cin >> n;
	vector<ll> a(n + 10);
	for(int i=1; i<=n; ++i){
		cin >> a[i];
		minn = min(minn, a[i]);
		maxx = max(maxx, a[i]);
	}
	ll l = minn, r = maxx;
	minn = 1e9 + 100;
	for(ll i=l; i<=r; ++i){
		ll cur = 0;
		for(ll j=1; j<=n; ++j){
			cur += divide(abs(i - a[j]));
		}
		minn = min(cur, minn);
	}
	cout << minn;
	return ;
}

int main(){
	cin.tie(nullptr)->ios::sync_with_stdio(false);
	solve();
	cout << "\n";
	return 0;
}

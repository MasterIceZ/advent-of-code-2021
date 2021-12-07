#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
	int n, minn = 1e9, maxx = 0;
	cin >> n;
	vector<int> a(n + 10);
	for(int i=1; i<=n; ++i){
		cin >> a[i];
		minn = min(minn, a[i]);
		maxx = max(maxx, a[i]);
	}
	int l = minn, r = maxx;
	minn = 1e9 + 100;
	for(int i=l; i<=r; ++i){
		int cur = 0;
		for(int j=1; j<=n; ++j){
			cur += abs(a[j] - i);
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

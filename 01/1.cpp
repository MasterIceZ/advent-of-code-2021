#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
	int n = 2000, last = 1e9 + 100;
	for(int i=1, x; i<=n; ++i){
		cin >> x;
		if(last < x){
			cnt++;
		}
		last = x;
	}
	cout << last;
	return ;
}

int main(){
	cin.tie(nullptr)->ios::sync_with_stdio(false);
	solve();
	cout << "\n";
	return 0;
}

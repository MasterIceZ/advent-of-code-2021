#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
	int n;
	cin >> n;
	map<int, ll> mp, mp2;
	for(int i=1, x; i<=n; ++i){
		cin >> x;
		mp[x]++;
	}
	int q = 256; 
	ll cnt = 0;
	while(q--){
		for(auto x: mp){
			if(x.first == 0){
				mp2[6] += x.second;
				mp2[8] += x.second;	
			}
			else{
				mp2[x.first - 1] += x.second;
			}
		}
		mp = mp2;
		mp2.clear();
	}
	for(auto x: mp){
		cnt += x.second;
	}
	cout << cnt;
	return ;
}

int main(){
	cin.tie(nullptr)->ios::sync_with_stdio(false);
	solve();
	cout << "\n";
	return 0;
}

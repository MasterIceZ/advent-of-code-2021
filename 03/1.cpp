#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int a[100];

void solve(){
	int n = 1000;
	string s;
	int sz;
	for(int i=1; i<n; ++i){
		cin >> s;
		sz = s.size();
		for(int j=0; j<s.size(); ++j){
			a[j + 1] += (s[j] - '0');
		}
	}
	int x, y;
	x = y = 0;
	for(int i=1; i<=sz; ++i){
		x *= 2, y *= 2;
		if(a[i] >= n - a[i]){
			x += 1;
		}
		else{
			y += 1;
		}
	}
	cerr << x << " " << y << "\n";
	cout << x * y;
	return ;
}

int main(){
	cin.tie(nullptr)->ios::sync_with_stdio(false);
	solve();
	cout << "\n";
	return 0;
}

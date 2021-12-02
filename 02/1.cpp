#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
	int n = 1000;
//	n = 6;
	string s;
	int x, y;
	x = y = 0;
	for(int i=1, a; i<=n; ++i){
		cin >> s >> a;
		if(s == "forward"){
			x += a;
		}
		else if(s == "down"){
			y += a;
		}
		else{
			y -= a;
		}
	}
	cout << x * y;
	return ;
}

int main(){
	cin.tie(nullptr)->ios::sync_with_stdio(false);
	solve();
	cout << "\n";
	return 0;
}

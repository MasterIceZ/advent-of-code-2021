#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
	int n = 1000;
//	n = 6;
	int x, y;
	x = y = 0;
	int aim = 0;
	string s;
	for(int i=1, a; i<=n; ++i){
		cin >> s >> a;
		if(s == "forward"){
			x += a;
			y += aim * a;
		}
		else if(s == "down"){
			aim += a;
		}
		else{
			aim -= a;
		}
	}
	cerr << aim << "\n";
	cout << y * x;
	return ;
}

int main(){
	cin.tie(nullptr)->ios::sync_with_stdio(false);
	solve();
	cout << "\n";
	return 0;
}

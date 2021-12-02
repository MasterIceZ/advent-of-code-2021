#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
	int n = 2000;
	vector<int> a(n + 10);
	for(int i=1; i<=n; ++i){
		cin >> a[i];
	}
	int last = 1e9 + 100, cnt = 0;
	for(int i=1; i<=n; i+=4){
		for(int j=0; j<=3 && i + j + 2 <= n; ++j){
			int stp = i + j, sum = 0;
			for(int k=0; k<3; ++k){
				sum += a[k + stp];
			}
			cnt += (sum > last);
			last = sum;
		}
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

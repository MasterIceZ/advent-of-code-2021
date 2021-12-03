#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
	int n = 1000;
//	n = 12;
	vector<string> v(n);
	for(auto &x: v){
		cin >> x;
	}
	bool br = false;
	bitset<1010> out;
	int sz = v[0].size(), id1, id2;
	for(int i=0; i<sz; ++i){
		int cnt1 = 0, cnt0 = 0;
		for(int j=0; j<v.size(); ++j){
			if(out[j]){
				continue;
			}
			if(v[j][i] == '1'){
				cnt1++;
			}
			else{
				cnt0++;
			}
		}
		char uses = '0';
		if(cnt1 >= cnt0){
			uses = '1';
		}
		for(int j=0; j<v.size(); ++j){
			if(v[j][i] != uses){
				out[j] = true;
			}
		}
		if(out.count() == n - 1){
			for(int j=0; j<v.size(); ++j){
				if(!out[j]){
					id1 = j;
					break;		 
				}
			}
			br = true;
			break;
		}
		if(br){
			break;
		}
	}
	out = 0;
	br = false;
	for(int i=0; i<sz; ++i){
		int cnt1 = 0, cnt0 = 0;
		for(int j=0; j<v.size(); ++j){
			if(out[j]){
				continue;
			}
			if(v[j][i] == '1'){
				cnt1++;
			}
			else{
				cnt0++;
			}
		}
		char uses = (cnt1 < cnt0 ? '1' : '0');
		for(int j=0; j<v.size(); ++j){
			if(v[j][i] != uses){
				out[j] = true;
			}
		}
		if(out.count() == n - 1){
			for(int j=0; j<v.size(); ++j){
				if(!out[j]){
					id2 = j;
					break;		 
				}
			}
			br = true;
			break;
		}
		if(br){
			break;
		}
	}

	int x = 0, y = 0;
	for(int i=0; i<sz; ++i){
		x *= 2;
		y *= 2;
		x += v[id1][i] - '0';
		y += v[id2][i] - '0';
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

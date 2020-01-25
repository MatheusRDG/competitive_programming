#include <bits/stdc++.h> 
#define SPEED std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);

using namespace std;

const int ms = 4e5 + 10;

int q,x,y;
int MEX;
int mark[ms];

vector<int> values;

void solve() {
	if (values.back() == MEX) {
		MEX++;
	}
	int MEXL = MEX;
	for(auto i: values) {
		if (i > MEXL) {
			
		}
		if (i < MEXL) {
			if (mark[i]) {
				if ((MEXL-i) % x == 0) {
					MEXL++;
				}
			} else {
				mark[i] = 1;
			}
		}
	}
}

int main(){
	SPEED;
	
	cin >> q >> x;
	
	while(q--){
		cin >> y;
		values.push_back(y);
		solve();
	}
}

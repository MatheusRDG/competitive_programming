#include <bits/stdc++.h>
#define SPEED std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
using namespace std;

int t, n, x, y;

int main() {
	SPEED;
	cin >> t;

	while(t--) {
		cin >> n;
		
		vector<pair<int, int>> coord;
		string ans;
		int package = 0;
		int posX = 0;
		int posY = 0;

		for(int i = 0; i < n; i++) {
			cin >> x >> y;
			coord.push_back(make_pair(x, y));		
		}

		sort(coord.begin(), coord.end());
 
		while(package < n) {
			if(posX == coord[package].first && posY == coord[package].second) {
				package++;
			} else {
				if(posX < coord[package].first) {
					ans += "R";
					posX++;
				} else if(posY < coord[package].second) {
					ans += "U";
					posY++;
				} else {
					break;
				}
			}
		}

		if(package == n) {
			cout << "YES" << endl;
			cout << ans << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	return 0;
}
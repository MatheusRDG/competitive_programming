#include <bits/stdc++.h>
#define SPEED std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
using namespace std;

int t, n;
int ans[3];

int findDivisor(int start, int index) {
	for(int i = start; i * i <= n; i++) {
		if(n % i == 0) {
			ans[index] = i;
			n /= i;
			return 1;
		}
	}
	return 0;
}

void solve() {
	if(findDivisor(2, 0)) {
		if(findDivisor(ans[0] + 1, 1) && n > ans[1]) {
			cout << "YES" << endl;
			for(int i = 0; i < 2; i++) {
				cout << ans[i] << ' ';
			}
			cout << n << endl;
			return;
		}
	}
	cout << "NO" << endl;
}

int main() {
	cin >> t;
	while(t--) {
		cin >> n;
		solve();
	}

	return 0;
}
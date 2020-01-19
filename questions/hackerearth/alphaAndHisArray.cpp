#include <bits/stdc++.h>
#define SPEED std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);

const int N = 1e5;
int n;
int t[2 * N];
int res;
int A[N], D[N];

int main() {
	
	SPEED;
	std::cin >> n;

	for(int i = 0;i < n;i++) {
		std::cin >> t[i+n];
	}

	for(int i = 0;i < n;i++) {
		std::cin >> D[i];
	}

	for(int i = 0; i < n ;i++) {	
		res = 0;
		for(int j = 0; j <= i ;j++) {
			if (t[j+n] >= D[i]) {
				res += D[i];
				t[n+j] -= D[i];
			} else {
				res += t[n+j];
				t[n+j] = 0;
			}
		}
		std::cout << res << " ";
	}

	return 0;
}
 
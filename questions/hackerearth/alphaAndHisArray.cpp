#include <bits/stdc++.h>
#define SPEED std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);

const int N = 1e5;
int n;
long t[N];
long res;
int least;
long A[N], D[N];

int main() {
	
	SPEED;
	std::cin >> n;

	for(int i = 0;i < n;i++) {
		std::cin >> t[i];
	}

	for(int i = 0;i < n;i++) {
		std::cin >> D[i];
	}

	for(int i = 0; i < n ;i++) {	
		res = 0;
		for(int j = least; j <= i ;j++) {
			if (t[j] >= D[i]) {
				res += D[i];
				t[j] -= D[i];
			} else {
				res += t[j];
				t[j] = 0;
			}
			if (t[least] == 0){
				least++;
			}
		}
		std::cout << res << " ";
	}

	return 0;
}
 
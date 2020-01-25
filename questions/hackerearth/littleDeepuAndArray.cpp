#include <bits/stdc++.h>
#define SPEED std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);

using namespace std;

int n, m, x;
const int ms = 1e5 + 20;
int values[ms];

int main() {
	SPEED;
	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> values[i];
	}

	cin >> m;

	for(int i = 0; i < m; i++) {
		cin >> x;
		for(int j = 0; j < n; j++) {
			if(values[j] > x) values[j] -= 1;
		}
	}

	for(int i = 0; i < n; i++) {
		cout << values[i] << ' ';
	}

	cout << endl;

	return 0;
}
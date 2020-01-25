#include <bits/stdc++.h>
#define SPEED std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
using namespace std;

int t;
int a, b, c, n;
int m, diff;

int main() {
	SPEED;
	cin >> t;
	for(int i = 0; i < t; i++) {
 
		cin >> a >> b >> c >> n;
 
		diff = 0;
		m = max(a, max(b, c));
		if(a < m) diff += m - a;
		if(b < m) diff += m - b;
		if(c < m) diff += m - c;
		
		n -= diff;
		if(n >= 0 && n % 3 == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
 
	return 0;
}
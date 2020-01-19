#include <iostream>

using namespace std;

const int N = 1e5;  // limit for array size
int n;  // array size
long long t[2 * N];
long long res;
long long A[N], D[N];

void build() {  // build the tree
  for (int i = n - 1; i > 0; --i) t[i] = t[i<<1] + t[i<<1|1];
}

void modify(int p, long long value) {  // set value at position p
  for (t[p += n] = value; p > 1; p >>= 1) t[p>>1] = t[p] + t[p^1];
}

int query(int l, int r) {  // sum on interval [l, r)
  int res = 0;
  for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
    if (l&1) res += t[l++];
    if (r&1) res += t[--r];
  }
  return res;
}

int main() {
  cin >> N;
  for(int i = 0;i < N;i++) {
      cin >> t[i+N];
  }
  build();
  for(int i = 0;i < N;i++) {
      cin >> D[i];
  }
  for(int i = 0;i < N;i++) {
      res = 0;
      for(int j = 0;j <= i;j++) {
          if (t[j+N] >= D[i]) {
              res+=t[n+j]-d[i];
              modify(j, t[n+j] - D[i]);
          } else {
              res+=t[n+j];
              modify(j, 0);
          }
      }
      cout << res << " ";
  }
  return 0;
}

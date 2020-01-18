#include <iostream>

using namespace std;

const int N = 1e5;  // limit for array size
int n;  // array size
long long t[2 * N];

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
  std::cin >> N;
  for(int i = 0;i < N;i++) {
      std::cin >> t[i+N];
      modify()
  }
  for(int i = 0;i < N;i++) {
      std::cin >> D[i];
  }
  for(int i = 0;i < N;i++) {
      for(int j = 0;j <= i;j++) {
          if (t[j+N] >= D[i]) {
              //t[j+N] - D[i]
              
          } else {
              //t[j+N] = 0;
          }
      }
  }
  //build();
  return 0;
}

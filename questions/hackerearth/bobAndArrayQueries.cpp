#include <bits/stdc++.h>
#define SPEED std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);

const int N = 5e5 + 10;

int n, q, X, Y, Q; 

int values[N];
int t[2 * N];

void modify(int p, int value) {  
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
  SPEED;
  std::cin>>n>>Q;
  for(int i = 0; i < Q; i++){
    std::cin>>q>>X;
    X-=1;

    if (q == 1){
      //values[X] = (values[X]<<1)|1;
      modify(X, t[X+n]+1);

    }else if(q == 2){
      //values[X] = values[X]>>1;
      if (t[X+n] > 0){
        modify(X, t[X+n]-1);
      }

    }else if(q == 3){
      std::cin>>Y;
      std::cout<<query(X,Y)<<"\n";
    }
  }

  return 0;
}

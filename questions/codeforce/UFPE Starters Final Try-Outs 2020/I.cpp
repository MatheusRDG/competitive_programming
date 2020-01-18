#include <bits/stdc++.h>
#define SPEED std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);

const int ms = 1e6 + 15;
const int msa = 1e8 + 15;

int s, n, m;    
int mat[ms][ms];
int ans[msa];

void solve(){

}

void explore(int i,int j,int val){
    
}
int main(){
    
    SPEED;

    std::cin>>s>>n>>m;

    for (int i = 1; i <= n; i++){
        for (int j = 1; i <= m; i++){
            std::cin>>mat[i][j];
        }        
    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; i <= m; i++){
            if (mat[i][j]){
                explore(i, j, mat[i][j]);
            }
        }        
    }
}

#include <bits/stdc++.h>
#define SPEED std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);

int q, n, a[105];

int solve(){
    
    for (int i = 0; i < n-1; i++){
        if ((a[i+1] - a[i]) == 1){
            return 2;
        }
    }
    return 1;
}

int main(){
    SPEED;
    std::cin>>q;
    
    for (int i = 0; i < q; i++){
        
        std::cin>>n;
        
        memset(a, 0, sizeof(a));
        
        for (int j = 0; j < n; j++){
            std::cin>>a[j];
        }
        
        std::sort(a, a + n);
        
        std::cout<<solve()<<"\n";
        
        
    }
    
    return 0;
}

#include <bits/stdc++.h>
#define SPEED std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);

int q, n, counterDays, counterRes, p[205], att[205], attAux[205], res[205];

void solve(){
    
    counterDays = 0;

    counterRes = 0;

    std::copy(p, p + n + 1, att);

    while (counterRes < n){
        
        for (int i = 1; i < n+1; i++){
            if (attAux[i] == p[i]){
                if (!res[i]){
                    res[i] = counterDays;
                    counterRes+=1;
                }        
            }
        }

        for (int i = 1; i < n+1; i++){
            attAux[p[i]] = att[i];
        }

        std::copy(attAux, attAux + n + 1, att);
        counterDays+=1;

    }

    for (int j = 1; j < n+1; j++){
        std::cout<<res[j]<<" ";
     }
     std::cout<<"\n";

}

int main(){
    SPEED;

    std::cin>>q;
    
    for (int i = 0; i < q; i++){
        
        std::cin>>n;
        
        memset(p, 0, sizeof(p));
        memset(att, 0, sizeof(att));
        memset(attAux, 0, sizeof(attAux));
        memset(res, 0, sizeof(res));


        for (int j = 1; j < n+1; j++){

            std::cin>>p[j];

        }

        solve();
    
    }
    
    
    return 0;
}

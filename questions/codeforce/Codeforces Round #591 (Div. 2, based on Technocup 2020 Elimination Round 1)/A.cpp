#include <bits/stdc++.h>
#define SPEED std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);

int q, n;

int main(){
    SPEED;
    std::cin>>q;
    
    for (int i = 0; i < q; i++){
        
        std::cin>>n;
        
        if (n%2){
            if (n == 1){
                std::cout<<2<<"\n";
            }else{
                std::cout<<1<<"\n";
            }
        }else{
            if (n==2){
                std::cout<<2<<"\n";
            }else{
                std::cout<<0<<"\n";
            }
        }
    }
    return 0;
}

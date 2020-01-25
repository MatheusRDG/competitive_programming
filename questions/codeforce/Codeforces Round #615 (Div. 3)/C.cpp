#include <bits/stdc++.h>
#define SPEED std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);

int t, n, res;

int solve(){

    for (int a = 2; a <= res; a++){
        for (int b = 2; b <= res; b++){
            for (int c = 2; c <= res; c++){
                if ((a*b*c) == n and (a != b and a != c and b != c)){
                    std::cout<<"YES"<<std::endl;
                    std::cout<<a<<" "<<b<<" "<<c<<std::endl;
                    return 1;
                }else{
                    if((a*b*c) > n){
                        continue;
                    }
                }
            }
        }
    }
    std::cout<<"NO"<<std::endl;
    return 0;
}
int main(){
    
    SPEED;

    std::cin >> t;

    while (t--){

        std::cin>>n;

        res = sqrt(n);

        solve();
    }

    return 0;
}

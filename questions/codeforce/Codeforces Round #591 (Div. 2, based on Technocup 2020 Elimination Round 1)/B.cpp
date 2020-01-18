#include <bits/stdc++.h>
#define SPEED std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);

int q, n, len;

std::string s, t;

void solve(){
    
    len = s.length();

    for (int i = 0; i < len; i++){
        for (int j = 0; j < len; i++){
            if (s[i] == t[j]){
                std::cout<<"YES"<<"\n";
                return;
            }
        }
    }
    std::cout<<"NO"<<"\n";
    return;
}

int main(){
    SPEED;
    std::cin>>q;
    std::string s, t;

    for (int i = 0; i < q; i++){
        
        std::cin>>s>>t;

        solve();

    }

    return 0;
}

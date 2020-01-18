#include <bits/stdc++.h>
#define SPEED std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);

int n, m;
std::string s;

int vefP(int i){
    int p1 = i;
    int p2 = i+m;
    while (true){
        if (p1 >= p2){
            return 1;
        }
        if (s[p1] == s[p2]){
            p1+=1;
            p2-=1;
        }else{
            return 0;
        }
    }
}

std::string solve(){
    for (int i = 0; i <= n-m; i++){
        if (vefP(i)){
            return "Accept";
        }
    }

    return "Reject";
}

int main(){
    
    SPEED;

    std::cin>>n>>m;
    std::cin>>s;
    m-=1;
    std::cout<<solve();
    
    return 0;
}

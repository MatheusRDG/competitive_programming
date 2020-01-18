#include <bits/stdc++.h>
#define SPEED std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);

const int ms = 2e5 + 5;
int n, input;
int inf  = 1e9;
std::vector<std::pair<int, int>> v;
int dp[ms];

int dp(i){
    if (i == 0){
        return 0;
    }else if(i == 1 or i == 2){
        return limit;
    }
    return dp(n-3) + v[i-1].first - v[i-3].first
}

int main(){
    SPEED;

    std::cin>>n;
    
    for (int i=0; i < n;i++){
        std::cin>>input;
        v.push_back(std::make_pair(input, i));
    }

    sort(v.begin(), v.end());




    return 0;
}

#include <bits/stdc++.h>
#define SPEED std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);

int t, n, x, y, xi, yi, count, pos;

int main(){
    
    SPEED;

    std::cin >> t;

    while (t--){

        std::cin>>n;

        xi = 0;
        yi = 0;
        count = 0;
        pos = 0;
        std::vector<std::pair<int, int>> v;
        std::string s;

        for (int i = 0; i < n; i++){
            std::cin>>x>>y;
            v.push_back(std::make_pair(x,y));
        }

        std::sort(v.begin(), v.end());

        while (count != n){
            //std::cout<<v[pos].first<<" "<<v[pos].second<<std::endl;
            if (v[pos].first == xi && v[pos].second == yi){
                count+=1;
                pos+=1;
            }else{

                if (v[pos].first > xi){
                    xi+=1;
                    s+="R";
                }else{
                    if (v[pos].second > yi){
                        yi+=1;
                        s+="U";
                    }else{
                        std::cout<<"NO"<<std::endl;
                        break;
                    }
                }

            }

        }

        if (count == n){
            std::cout<<"YES"<<std::endl;
            std::cout<<s<<std::endl;
        }

    }

    return 0;
}

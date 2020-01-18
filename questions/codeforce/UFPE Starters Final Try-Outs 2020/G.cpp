#include <bits/stdc++.h>
#define SPEED std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);

int c, p, s;
std::map<std::string, int>score;
std::map<std::string, int>questions;

void solve(){
}

int main(){
    
    SPEED;

    std::cin>>c>>p>>s;

    for (int i = 0; i < c; i++){
        std::string contestant;
        std::cin >> contestant;
        score[contestant] = 1;

    }

    for (int i = 0; i < p; i++){
        std::string question;
        int point;
        std::cin>>question>>point;
        questions[question] = point;
    }

    for(int i = 0; i < s; i++){
        std::string contestant;
        std::string question;
        std::string verdict;

        std::cin>>contestant>>question>>verdict;

        if (verdict == "AC"){
            if (questions[question]){
                if (score[contestant]){
                    score[contestant]+=questions[question];
                }
            }
        }
    }

    for (auto i : score){
        std::cout<< i.first << " " << i.second-1<<std::endl;
    }
    return 0;
}

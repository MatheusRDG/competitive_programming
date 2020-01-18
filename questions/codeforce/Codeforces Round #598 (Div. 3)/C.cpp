#include <bits/stdc++.h>
#define SPEED std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);

int n, m, d;
int plat[1005];
int ans[1005];
int ansAux[1005];

void printAns(){
    std::cout<<"YES"<<std::endl;
    for (int i = 0; i <= m; i++){
        for (int j = ansAux[i] - plat[i] + 1; j <= ansAux[i]; j++){
            ans[j] = i+1;
        }
    }

    for (int i = 0; i < n; i++){
        std::cout<<ans[i]<<" ";
    }
}

int solve(){


    int pointer = d-1;
    int platAux = 0;

    //std::cout<<pointer<<std::endl;

    if (pointer >= n){
        ansAux[platAux] = n-1;
        pointer+=plat[platAux]-1;
        platAux+=1;
        printAns();
        return 1;
    }

    //std::cout<<pointer<<" "<<n<<std::endl;

    while (pointer < n){

        if (platAux < m) {

            ansAux[platAux] = plat[platAux]-1 + pointer;
            pointer+=plat[platAux]-1;
            platAux+=1;

        }else{
            std::cout<<"NO";
            return 0;
        }

        pointer += d;
        //std::cout<<pointer<<" "<<n;

    }

    //RECUO
        
    while (platAux < m){

        int platAtt = plat[platAux];

        while (platAtt > 0){
            bool flag = 0;
            for (int i = platAux-1; i >= 0; i--){
                if (i == 0){
                    if (ansAux[platAux]-plat[platAux]+1 >= 0){
                        platAtt-=1;
                        flag = 1;
                        break;
                    }
                }else{
                    if (ansAux[platAux]-plat[platAux] > ansAux[platAux-1]){
                        platAtt-=1;
                        flag = 1;
                        break;
                    }

                }
            }
            if (flag){
                continue;
            }else{
                std::cout<<"Ok2";
                std::cout<<"NO";
                return 0;
            }

        }
        ansAux[n] = platAux;
        platAux += 1;

    }
    printAns();
    return 1;
}



int main(){
    SPEED;
    
    std::cin>>n>>m>>d;

    for (int i = 0; i < m; i++){
        std::cin>>plat[i];
    }
    
    solve();

    return 0;
}

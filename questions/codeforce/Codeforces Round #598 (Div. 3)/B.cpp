#include <bits/stdc++.h>
//#define SPEED std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);

int n, naux, q, arr[105], plays[105], i, c, pos;

void trade(){
    pos = i;
    while(n or pos+1 != c){
        if (!plays[pos]){
            plays[pos] = 1;
            std::swap(arr[pos], arr[pos-1]);
            pos--;
            n--;
        }else{
            break;
        }
    }
}

int main(){
    //SPEED;
    
    std::cin>>q;
    //std::cout<<"teste";
    for(i = 0; i < q; i++){
        
        std::cin>>n;
        
        for(i = 0; i < n; i++){
            std::cin>>arr[i];
        }

        c = 1;
        
        naux = n;

        while(n){
            for(i = 0; i < n; i++){
                if(arr[i] == c){
                    trade();
                    c++;
                }
            }
        }
        std::cout<<naux;
        for(i = 0; i < naux; i++){
            std::cout<<arr[i]<<" ";
        }
        std::cout<<"\n";
        
    }

    return 0;
}

#include <bits/stdc++.h>
#define SPEED std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);

const int ms = 2e5 + 10;

int n, m, q;

std::string drink[ms];

int drinkVal[ms];

std::map<std::string, int>drinks;


int query(int BITree[], int index){
    
    int sum = 0;

    index+=1;

    while (index > 0){

        sum += BITree[index];

        index -= index & (-index);

    }

    return sum;
}

void rangeQuery(int BITree[], int l, int r){

    int hours = (r-l+1)*30;

    int sumVol = query(BITree, r) - query(BITree, l-1);

    std::cout<<sumVol<<std::endl;
    if (sumVol <= hours){
        std::cout<<"NO"<<std::endl;
    }else{
        std::cout<<"YES"<<std::endl;
    }
}

void update(int BITree[], int lenght, int index, int value){
    
    index+=1;

    while (index <= lenght){

        BITree[index] += value;

        index += index & (-index);
    }

}

int *build(int arr[], int lenght){

    int *BITree = new int[lenght+1];
    
    for (int i = 1; i <= lenght; i++){
        BITree[i] = 0;
    }

    for (int i = 0; i < lenght; i++){
        update(BITree, lenght, i, arr[i]);
    }

    return BITree;

}

int main(){
    
    SPEED;

    std::cin>>n>>m>>q;

    for (int i = 0; i < n; i++){
        std::cin>>drink[i];
    }

    std::string aux;
    int vol;
    for (int i = 0; i < m; i++){
        std::cin>>aux>>vol;
        drinks[aux] = vol;
    }

    
    for (int i = 0; i < n; i++){
        drinkVal[i] = drinks[drink[i]];
    }

    int *BITree = build(drinkVal, n);

    int a, b, c;
    for (int i = 0; i < q; i++){
        std::cin>>a>>b;
        if (a == 1){
            std::cin>>aux;
            drink[b-1] = aux;
            update(BITree, n, b, drinks[aux]);

        }else{
            std::cin>>c;
            rangeQuery(BITree, b, c);
        }
    }
}

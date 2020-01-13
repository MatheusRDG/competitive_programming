#include <bits/stdc++.h>
#define SPEED std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);

int query(int BITree[], int index){

    int sum = 0;

    index +=1;

    while (index > 0){

        sum += BITree[index];

        index -= index & (-index);

    }

    return sum;
}

int rangeSum(int BITree[], int left, int right){
    return query(int BITree[], right) - query(int BITree[], left-1);
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

    int arr[] = {10,10,10,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int *BITree = build(arr, n);

/*    for (int i = 1; i <= n; i++){
        std::cout<<BITree[i]<<" ";
    }*/

    std::cout<<rangeSum(BITree, 1, 3);
}

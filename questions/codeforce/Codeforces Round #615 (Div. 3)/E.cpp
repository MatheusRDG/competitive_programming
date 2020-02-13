#include <bits/stdc++.h>

using namespace std;

const int ms = 1e5 + 15;

int n, m, k, u, v, l;

int matriz[ms][ms];

int main(){

	cin >> n >> m >> k;

	int armz[k];

	for(int j = 0; j < k; j++){
		cin >> armz[j];
	}

	for(int i = 0; i < m; i++){
		cin >> u >> v >> l;
		u -= 1;
		v -= 1;
		if(matriz[u][v]){
		    if(matriz[u][v] > l){
		        matriz[u][v] = l;
		    }
		}else{
		    matriz[u][v] = l; 
		} 
	}

	return 0;
}
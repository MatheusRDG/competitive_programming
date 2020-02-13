#include <bits/stdc++.h>
#define SPEED std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);

int n, m, k, a, b;

const int ms = 3e5;

int mark[ms];

int solve(std::vector gcomp){


	if (n-k >= k && DFS(0, 0, gcomp)){
		return 1;
	}else{
		return 0;
	}

}

int DFS(int source, int count, std::vector gcomp){

	mark[source] = 1;

	if (count == n){
		return 1;
	}

	for (int i = 0; i < n; i++){

		if (!mark[i] and){

			if (DFS(i)){
				return 1;
			}else{
				return 0;
			}

		}

	}

	return 0;
}


int main(){

	SPEED;

	std::cin >> n >> m >> k;

	std::vector<vector<int>> gcomp[n];

	for (int i = 0; i < m; i++){

		std::cin>>a>>b;

		gcomp[a].push_back(b);
		gcomp[b].push_back(a);

	}

	if (solve(gcomp)){
		std::cout<<"possible";
	}else{
		std::cout<<"impossible";
	}

	return 0;
}
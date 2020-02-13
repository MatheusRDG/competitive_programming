#include <bits/stdc++.h> 
#define SPEED std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);

const int ms = 4e5;

int q, x, y, arr[ms], mex;

int main(){
	SPEED;
	
	std::cin>>q>>x;
	
	while(q--){
		std::cin >> y;
		arr[y%x]++;

		while(arr[mex%x]){
			arr[mex%x]--;
			mex++;
		}

		std::cout<<mex<<"\n";
	}

}

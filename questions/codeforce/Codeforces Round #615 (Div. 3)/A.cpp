#include <bits/stdc++.h>
#define SPEED std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);

int t;

int max, pos, equalCost , n;

int input[5];

int main() {
	
	SPEED;
	std::cin>>t;

	while (t--){
		max = 0;
		equalCost = 0;
		for (int i = 1; i <= 3; i++){
			std::cin>>input[i];
			
			if (input[i] > max){

				max = input[i];
				pos = i;

			}
		}

		std::cin>>n;

		for (int i = 1; i <= 3 ; i++){
			if (i != pos){
				equalCost += max - input[i];
			}
		}

		n -= equalCost;

		if (n > 0 and n%3 == 0){
			std::cout<<"YES"<<std::endl;
		}else{
			std::cout<<"NO"<<std::endl;
		}

	}

	return 0;
}
 
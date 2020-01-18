#include <bits/stdc++.h> 
#define SPEED std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0)

int t, x, y;
float aux;

float op1(float a){
	return (a*3)/2;
}
int solve(){
	std::cin>>x>>y;
	if(x>=y){
		std::cout<<"YES"<<"\n";
		return 1;
	}else{
		aux = x;

		while (ceil(aux) == x){
			
			if(x>=y){
				std::cout<<"YES"<<"\n";
				return 1;
			}

			aux = op1(aux);
			x = aux;

		}
		std::cout<<"NO"<<"\n";
		return 0;
	}
}

int main()  
{ 
	SPEED;
	
	std::cin>>t;

	while (t--){
		solve();
	}

    return 0; 
} 
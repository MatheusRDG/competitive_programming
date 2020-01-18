
#include <bits/stdc++.h> 
#define SPEED std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0)

int t, n, x, a, b, res;

int main()  
{ 
	SPEED;

	std::cin>>t;

	while (t--){
		std::cin>>n>>x>>a>>b;
		if(a > b){
			while (x--){
				if (a < n){
					a++;
				}else{
					if (b > 1){
						b--;
					}else{
						break;
					}
				}
			}
		}else{
			while (x--){
				if (a > 1){
					a--;
				}else{
					if (b < n){
						b++;
					}else{
						break;
					}
				}
			}
		}
		std::cout<<abs(a-b)<<"\n";
	}

    return 0; 
} 
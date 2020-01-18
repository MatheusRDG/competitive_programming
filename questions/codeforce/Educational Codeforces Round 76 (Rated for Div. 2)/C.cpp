#include <bits/stdc++.h> 
#define SPEED std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0)

int t, n, aux;
int a[200050];

int solve(){
	memset(a, 0, sizeof(a));
	std::cin>>n;
	for (int i = 1; i <= n; i++){
		std::cin>>aux;
		a[aux]+=1;
		if (a[aux] == 2){
			std::cout<<i<<"\n";
			return i;
		}
	}
	std::cout<<-1<<"\n";
	return 0;
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
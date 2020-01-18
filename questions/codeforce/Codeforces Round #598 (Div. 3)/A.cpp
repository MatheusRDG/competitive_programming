
#include <bits/stdc++.h> 

int q, a, b, n, S;
double res;

int solve(){
	int Scopy = S;
	double t = S/n;
	while (abs(S/n) != S/n){
		S-=1;
		t = S/n;
		if (S<=0){
			std::cout<<"NO"<<"\n";
			return 0;
		}
	}
	if (t<=a and (n*t)+b >= Scopy){
		std::cout<<"YES"<<"\n";
		return 0;
	}else{
		std::cout<<"NO"<<"\n";
		return 0;
	}

}

int main()  
{ 
	std::cin>>q;
	for(int i = 0; i < q; i++){
		std::cin>>a>>b>>n>>S;
		//std::cout<<a<<" "<<b<<" "<<n<<" "<<S<<" ";
		solve();
	}
    return 0; 
} 
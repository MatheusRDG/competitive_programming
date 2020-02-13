#include <bits/stdc++.h>
#define SPEED std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#define rep(n) for(int ii = 0; ii < n; ++ ii)

int n, m, k;
const int ms = 1005;
//std::vector<char[ms][ms]> maze;
char s[ms][ms];

int solve(int posX, int posY, std::string res, int resLenght){

	std::string resRev;

	while (1){	
		//QTD MOVIMENTOS
		if (resLenght == k/2){
			std::cout<<res;
			reverse(resRev.begin(), resRev.end());
			std::cout<<resRev;
			return 1;
		}

		if (s[posX+1][posY] == '.'){ //DOWN

			s[posX+1][posY] = 'X';
			s[posX][posY] = '.';

			posX+=1;
			res+="D";
			resRev+="U";
			resLenght+=1;

		}else if (s[posX][posY-1] == '.'){ //LEFT
			s[posX][posY-1] = 'X';
			s[posX][posY] = '.';

			posY-=1;
			res+="L";
			resRev+="R";
			resLenght+=1;

		}else if (s[posX][posY+1] == '.'){ //RIGHT
			s[posX][posY+1] = 'X';
			s[posX][posY] = '.';

			posY+=1;
			res+="R";
			resRev+="L";
			resLenght+=1;

		}else if(s[posX-1][posY] == '.'){  //UP
			s[posX-1][posY] = 'X';
			s[posX][posY] = '.';

			posX-=1;
			res+="U";
			resRev+="D";
			resLenght+=1;
		} else {
			std::cout<<"IMPOSSIBLE";
			return 0;
		}
	}

	return 1;
}

int main() {
	SPEED;

	std::cin >> n >> m >> k;
	
	int posX = 0;
	int posY = 0;
	int flag = 0;

	for(int i = 0;i < n;i++){
		std::cin>>s[i];
		
		if (!flag){

			for(int j = 0;j < m;j++){
				if (s[i][j] == 'X'){
		    		posX = i;
		    		posY = j;
		    		flag = 1;
				}
			}
		}
	}

	if (k%2){
		std::cout<<"IMPOSSIBLE";
	}else{
		solve(posX, posY, "", 0);
	}

	return 0;
}
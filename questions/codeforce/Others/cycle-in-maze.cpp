#include <bits/stdc++.h>
#define SPEED std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#define rep(n) for(int ii = 0; ii < n; ++ ii)

int n, m, k;
std::vector<char[1005]> maze;
char s[1005];

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

		if (maze[posX+1][posY] == '.'){ //DOWN

			maze[posX+1][posY] = 'X';
			maze[posX][posY] = '.';

			posX+=1;
			res+="D";
			resRev+="U";
			resLenght+=1;

		}else if (maze[posX][posY-1] == '.'){ //LEFT
			maze[posX][posY-1] = 'X';
			maze[posX][posY] = '.';

			posY-=1;
			res+="L";
			resRev+="R";
			resLenght+=1;

		}else if (maze[posX][posY+1] == '.'){ //RIGHT
			maze[posX][posY+1] = 'X';
			maze[posX][posY] = '.';

			posY+=1;
			res+="R";
			resRev+="L";
			resLenght+=1;

		}else if(maze[posX-1][posY] == '.'){  //UP
			maze[posX-1][posY] = 'X';
			maze[posX][posY] = '.';

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

	//std::vector<char[m+1]> maze;

	int posX = 0;
	int posY = 0;
	int flag = 0;

	rep(n){

		std::cin>>s;

		if (!flag){

			rep(m){
				if (s[m] == 'X'){
			    	if (found != std::string::npos){
			    		posX = found;
			    		flag = 1;
			    	}
			    	posY+=1;
				}
			}
		}

		maze.push_back(s);
	}

	if (k%2){
		std::cout<<"IMPOSSIBLE";
	}else{
		solve(posX, posY, "", 0, maze);
	}

	return 0;
}
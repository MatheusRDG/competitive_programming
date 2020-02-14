#include <bits/stdc++.h>
#define SPEED std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#define rep(n) for(int ii = 0; ii < n; ++ ii)

int n, m, k;
const int ms = 1015;
char s[ms][ms];

std::string backtracking(int posX, int posY, int posXinitial, int posYinitial, std::string res, char maze[ms][ms]){
	//Break Point
	if (posX == posXinitial and posY == posYinitial){
		return res;
	}

	std::vector<std::string> v;

	if (maze[posX][posY+1] == '.' and (posY+1 < m)){ //RIGHT
		maze[posX][posY+1] = 'X';
		maze[posX][posY] = '*';

		v.push_back(backtracking( posX , posY+1, posXinitial, posYinitial, res+"R", maze));

		maze[posX][posY+1] = '.';
		maze[posX][posY] = 'X';

	}

	if(maze[posX-1][posY] == '.' and (posX-1 >= 0) ){  //UP
		maze[posX-1][posY] = 'X';
		maze[posX][posY] = '*';

		v.push_back(backtracking( posX-1 , posY, posXinitial, posYinitial, res+"U", maze));

		maze[posX-1][posY] = '.';
		maze[posX][posY] = 'X';

	}

	if (maze[posX][posY-1] == '.' and (posY-1 >= 0)){ //LEFT
		maze[posX][posY-1] = 'X';
		maze[posX][posY] = '*';

		v.push_back(backtracking( posX , posY-1, posXinitial, posYinitial, res+"L", maze));

		maze[posX][posY-1] = '.';
		maze[posX][posY] = 'X';
	}

	if (maze[posX+1][posY] == '.' and (posX+1 < n)){ //DOWN

		maze[posX+1][posY] = 'X';
		maze[posX][posY] = '*';

		v.push_back(backtracking( posX+1 , posY, posXinitial, posYinitial, res+"D", maze));

		maze[posX+1][posY] = '.';
		maze[posX][posY] = 'X';
	}

	std::string local = "ZZZZZZZ";

	for (auto i : v){
		if (lexicographical_compare(local.begin(), local.end(), i.begin(), i.end())){
			local = i;
		}
	}

	if (lexicographical_compare(res.begin(), res.end(), local.begin(), local.end())){
		return res;
	}else{
		return local;
	}


}


int solve(int posX, int posY, std::string res, int resLenght){

	int posXinitial = posX;
	int posYinitial = posY;

	while (1){

		//QTD MOVIMENTOS
		if (resLenght == k/2){
			std::string back = backtracking(posX, posY, posXinitial, posYinitial, "", s);
			if (back != "ZZZZZZZ"){
				std::cout<<res+back;
				return 1;
			}else{
				std::cout<<back;
				std::cout<<"IMPOSSIBLE";
				return 0;
			}
		}

		if (s[posX+1][posY] == '.' and (posX+1 < n)){ //DOWN

			s[posX+1][posY] = 'X';
			s[posX][posY] = '.';

			posX+=1;
			res+="D";
			resLenght+=1;

		}else if (s[posX][posY-1] == '.' and (posY-1 >= 0)){ //LEFT
			s[posX][posY-1] = 'X';
			s[posX][posY] = '.';

			posY-=1;
			res+="L";
			resLenght+=1;

		}else if (s[posX][posY+1] == '.' and (posY+1 < m)){ //RIGHT
			s[posX][posY+1] = 'X';
			s[posX][posY] = '.';

			posY+=1;
			res+="R";
			resLenght+=1;

		}else if(s[posX-1][posY] == '.' and (posX-1 >= 0) ){  //UP
			s[posX-1][posY] = 'X';
			s[posX][posY] = '.';

			posX-=1;
			res+="U";
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

	for(int i = 0; i < n; i++){
		std::cin>>s[i];
		
		if (!flag){

			for(int j = 0; j < m;j++){
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
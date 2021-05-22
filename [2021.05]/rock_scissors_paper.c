#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(0));
	int answer = rand() % 100 +1;
	int num, user, urange = 0, crange = 0;

	while (1) {
		int answer = (rand() % 100 +1)%3;
		
		if (urange >= 3){
			printf("유저가 승리하였습니다. ( 연속 3회 승리 )");
			break;
		}
		
		if (crange >= 3){
			printf("유저가 패배하였습니다. ( 연속 3번 패배 )");
			break;
		}

		printf("가위(0) 바위(1) 보(2) 를 입력하세요 [정수] : ");
		scanf("%d", &user);

		if (user != 0 && user != 1 && user != 2)
			continue;
		
		if ((user == 0 && answer == 2) || (user == 1 && answer == 0) || (user == 2 && answer == 1)) {
			urange++;
			crange = 0;
		}

		else if ((answer == 0 && user == 2) || (answer == 1 && user == 0) || (answer == 2 && user == 1)){
			crange++;
			urange = 0;
		}
		
		else{
			urange = 0;
			crange = 0;
		}
		
		printf("유저가 입력한 값 : %d / 봇이 입력한 값 : %d / 연속 횟수(유저) : %d / 연속 횟수(봇) : %d \n\n", user, answer, urange, crange);
		num++;
	}
}

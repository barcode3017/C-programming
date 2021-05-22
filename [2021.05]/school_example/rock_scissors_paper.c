#include <stdio.h>
#include <stdlib.h> // 랜덤 함수를 사용하기 위해 include를 time과 stdlib을 이용한다
#include <time.h>

int main() {
	srand(time(0));
	int answer = rand() % 100 +1;
	int num, user, urange = 0, crange = 0; // 랜덤 수를 만들어주는 코드들 ( 시간에 따라 1~100 사이의 수로 나오게 설정되어 있음 )

	while (1) {
		int answer = (rand() % 100 +1)%3; // 랜덤 수에서 1~100 -> 0~2까지 나오도록 설정함
		
		// USER가 이길 경우 & 봇이 이길 경우를 설정해줌 -> while문에서 빠져나와 더 이상 반복을 안하게 하기 위해서
		if (urange >= 3){
			printf("유저가 승리하였습니다. ( 연속 3회 승리 )");
			break; // 소스코드 종료 (유저가 승리)
		}
		
		if (crange >= 3){
			printf("유저가 패배하였습니다. ( 연속 3번 패배 )");
			break; // 소스코드 종료 (유저가 패배)
		}

		// SCANF를 통해 USER의 가위, 바위, 보를 입력받음
		printf("가위(0) 바위(1) 보(2) 를 입력하세요 [정수] : ");
		scanf("%d", &user);

		// 미리 설정된 수가 아니라면, 반복문을 다시 반복하도록 함
		if (user != 0 && user != 1 && user != 2)
			continue;
		
		// user가 이길 경우에 대해 설정해줌
		if ((user == 0 && answer == 2) || (user == 1 && answer == 0) || (user == 2 && answer == 1)) {
			urange++; // 연속하여 3번을 감지해야 하기에, 기존에 있었던 수에서 더해줌 (후위연산자 사용)
			crange = 0; // 연속하여 3번이 아닌 경우이기에 0으로 설정
		}

		// 봇이 이결 경우 설정 (아래는 위와 설정이 동일하나, 반대로 설정이 되어있음)
		else if ((answer == 0 && user == 2) || (answer == 1 && user == 0) || (answer == 2 && user == 1)){
			crange++;
			urange = 0;
		}
		
		// 비길 경우에는 모두 0으로 설정
		else{
			urange = 0;
			crange = 0;
		}
		
		// 가위바위보 상황을 입력해줌
		printf("유저가 입력한 값 : %d / 봇이 입력한 값 : %d / 연속 횟수(유저) : %d / 연속 횟수(봇) : %d \n\n", user, answer, urange, crange);
		num++;
	}
}

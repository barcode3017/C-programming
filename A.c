#include <stdio.h>

int main() {

	// 배열의 주소값 출력해보기
	int arr[10] = { 0 };
	for (int i = 0; i < 10; i++) {
		printf("&arr[%d] = %d\n", i, &arr[i]);
	}

	printf("\n");

	// 배열과 참조 연산자
	int* parr = &arr[0]; // parr이 arr의 0번 인덱스의 주소값의 참조 연산자임
	for (int i = 0; i < 10; i++) {
		printf("&arr[%d] = %d\n", i, *(parr + i)); // parr의 영향으로 계속 0이 출력됨
	}

	printf("\n");

	// 배열의 이름
	printf("arr = %d\n", arr); // 배열의 이름은 첫번째 원소의 값을 가져와줌
	printf("&arr[0] = %d", &arr[0]); // 위와 같은 결과를 나타냄

	printf("\n");

	int arr[10] = { 0 };
	int* parr = &arr[0];

	printf("sizeof(arr) = %d\n", sizeof(arr)); // 4씩 10개의 원소를 수용하는 배열 = 40 출력
	printf("sizeof(parr) = %d", sizeof(parr)); // parr는 arr 0번 인덱스의 주소값을 가져옴 = 4 출력


	// [] 연산자 - 배열의 원소에 접근한다
	int arr[10] = { 0 };

	for (int i = 0; i < 10; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
		printf("*(arr + %d) = %d\n", i, *(arr + 1));

		printf("%d[arr] = %d\n", i, i[arr]);
		printf("arr[%d] = %d\n", i, arr[i]);
	}
}

#include <stdio.h>

int main() {

	// 문제 01.
	int num;
	printf("%d\n", &num);
	printf("num의 주소값 : %d\n", &num);

	// 문제 02.
	int* pnum = &num;
	printf("%d\n", pnum);
	printf("num을 출력한 num의 주소값 : %d\n", &num);
	
	// 문제 03.
	*pnum = 10;
	printf("pnum으로 변경한 num의 값 : %d\n", num);
	
	// 문제 04.
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr_length = 10;
	int* iter = arr;

	/*
	for (iter; iter >arr_length; iter++) {
		printf("%d ", *iter);
	}
	*/

	while (iter != arr + arr_length) {
		printf("%d ", *iter);
		iter++;
	}
}

#include <stdio.h>

int main() {

	// 기본 포인터에 대해서
	int n = 100;
	int* ptr = &n; // 포인터를 저장하는 ptr에 n의 주소값을 저장시킴
	
	printf("%d\n", &n); // int형에 100을 저장해준 것의 주소값을 출력함
	printf("%d\n", ptr); // 저장시킨 주소값을 출력함
	printf("%d\n", *ptr); // ptr의 주소값 = n이 갖고 있었던 값을 출력함 (참조 연산자 - n의 변수 위치에 접근함)
	

	// 포인터의 주소값 변경하기
	*ptr = 50;

	printf("%d\n", *ptr); // ptr의 주소값을 50으로 변경 --> 50 출력
	printf("%d\n", n); // ptr의 주소값은 n과 같으므로 --> 50 출력


	// 포인터의 포인터 : 더블 포인터, 이중 포인터
	int** pptr = &ptr;
	**pptr = 100;

	printf("%d\n", *pptr); // n의 주소값 출력 : ptr의 주소값을 가지고 있고, ptr의 주소값은 n이라는 변수의 주소값을 가지고 있음
	printf("%d\n", **pptr); // 더블 포인터에서 두 번 참조를 하여 n의 값을 100으로 변경하였음 --> 100 출력


	// 포인터 예제
	int a = 1, b = 5;
	int* p;

	p = &a;
	*p = 2; // a = 2 라는 것과 같음
	printf("a = %d\n", a); // p의 값인 2 출력

	p = &b; // p는 b의 주소값
	b = 10; // b는 10임
	printf("*p = %d\n", *p); // b의 값인 10 출력


	// 포인터의 연산
	int a;
	int* pa = &a;

	printf("pa = %d\n", pa);
	printf("pa + 1 = %d\n", pa + 1); // 1을 더했는데, 4를 더한 값이 나옴 = 포인터가 가리키는 자료형이 4byte이기에 4를 더해준다 --> char 1을 더함


	
}

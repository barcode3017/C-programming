#include <stdio.h>

// 포인터로 함수 사용하기
void swap(int* n1, int* n2) {
	int tmp = *n1;
	*n1 = *n2;
	*n2 = tmp;
}

int main() {
	int n1 = 100, n2 = 50;
	swap(&n1, &n2);
	printf("%d %d", n1, n2);
}

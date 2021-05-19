#include <stdio.h>

int main() {
  
  int a, b, i, j;
  printf("A와 B에 들어갈 수를 입력하세요 : ");
  scanf("%d %d", &a, &b);

  // 기본 별 찍기 ( a*b 정사각형 모양 )
  printf("\n< 방법 1 > 기본 모양으로 별 찍기\n");
  for(i = 0; i<b; i++){
    for(j=0; j<a; j++){
      printf("*");
    }
    printf("\n");
  }
  
  return 0;
}

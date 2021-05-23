#include <stdio.h>

int main() {
  
  int a, b, i, j;
  printf("A와 B에 들어갈 수를 입력하세요 : ");
  scanf("%d %d", &a, &b);

  // 기본 별 찍기 ( a*b 정사각형 모양 )
  printf("\n< 방법 1 > 기본 모양으로 별 찍기\n");
  for(i=0; i<b; i++){
    for(j=0; j<a; j++){
      printf("*");
    }
    printf("\n");
  }
  
  
  // b*a 직사각형 모양으로 별 찍기
  printf("\n< 방법 2 > 기본 모양의 역방향으로 별 찍기\n");
  for(i=0; i<a; i++){
    for(j=0; j<b; j++){
      printf("*");
    }
    printf("\n");
  }
  
  
  // a의 줄 수만큼 별 찍기
  printf("\n< 방법 3 > a의 줄 수 만큼 별 찍기\n");
  for(i=0; i<a; i++){
      printf("*");
      printf("\n");
  }
  
  
  // 직각삼각형 모양으로 별 찍기
   printf("\n< 방법 4 > 직각삼각형 모양으로 별 찍기\n");
  for(i=a; i>0; i--){
      for(j=a; j>=i; j--){
          printf("*");
      }
      printf("\n");
  }
  
  // 직각삼각형 모양에서 반대로 별 찍기
   printf("\n< 방법 5 > 직각삼각형 모양 반대로 별 찍기\n");
  for(i=a; i>0; i--){
      for(j=1; j<=i; j++){
          printf("*");
      }
      printf("\n");
  }
  
  
  return 0;
}

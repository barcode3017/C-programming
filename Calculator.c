/* 성적 계산기 
   -> scanf와 print문을 이용하여 기본적인 코드 작성
   -> 반복(for)문을 활용하여 사용자가 입력할 과목 수 만큼 석차를 입력받음
   -> 변수에 저장하여 최종적으로 [ 평균 / 과목의 등급 / 평균 등급 ] 의 정보를 얻을 수 있도록 함 */

#include <stdio.h>

int main()
{
    int count;
    int a, c, set, p;
    double b;
    
    printf("계산할 과목의 수를 입력하세요 : ");
    scanf("%d", &count);
    
    if(count<=0){
        printf("0 이하의 값은 계산할 수 없습니다. 다시 실행하세요.");
    }
    
    else
        printf("\n\n< 과목코드 입력 시 주의사항 >\n1) 과목코드를 모르겠다면, 0을 입력하여 정보를 출력받으세요\n2) 과목코드는 십의 자리수 0은 제외합니다(ex 05라면, 5를 입력하세요)\n\n");
    
    for(; count>0; count--){
        printf("과목코드를 입력하세요 : ");
        scanf("%d", &a);
       
        
        if (a == 1 || a == 2 || a == 3 || a == 4){
            printf("해당 과목의 석차, 점수와 반영비율을 입력하세요 : ");
            scanf("%d %d %d", &b, &c, &p);
            
            if (c<=11) printf("1등급");
            else if (b<=29) printf("2등급"); 
            else if (b<=61) printf("3등급"); 
            else if (b<=106) printf("4등급"); 
            else if (b<=159) printf("5등급");
            else if (b<=204) printf("6등급");
            else if (b<=236) printf("7등급");
            else if (b<=254) printf("8등급");
            else printf("9등급");
        }
        
        else if (a == 5){
            printf("해당 과목의 석차, 점수와 반영비율을 입력하세요 : ");
            scanf("%d %d %d", &b, &c, &p);
            
            if (b<=5) printf("1등급");
            else if (b<=15) printf("2등급"); 
            else if (b<=30) printf("3등급"); 
            else if (b<=53) printf("4등급"); 
            else if (b<=79) printf("5등급");
            else if (b<=79) printf("6등급");
            else if (b<=79) printf("7등급");
            else if (b<=79) printf("8등급");
            else printf("9등급");
        }
        
        else if (a == 10){
            printf("해당 과목의 석차, 점수와 반영비율을 입력하세요 : ");
            scanf("%d %d %d", &b, &c, &p);
            
            if (b<=3) printf("1등급");
            else if (b<=7) printf("2등급"); 
            else if (b<=15) printf("3등급"); 
            else if (b<=27) printf("4등급"); 
            else if (b<=40) printf("5등급");
            else if (b<=52) printf("6등급");
            else if (b<=60) printf("7등급");
            else if (b<=64) printf("8등급");
            else printf("9등급");
        }
        
        else if (a == 13){
            printf("해당 과목의 점수와 반영비율을 입력하세요 (해당 과목은 절대평가입니다) : ");
            scanf("%d %d", &b, &p);
            
            if (b>=90) printf("A");
            else if (b>=80) printf("B"); 
            else if (b>=70) printf("C"); 
            else if (b>=60) printf("D"); 
            else if (b>=50) printf("E");
            else printf("F");
            
            printf("반영 비율에 따른 점수 : %.2lf (%.2lf점 감점)", (b%10)*(p/10), p-(b%10)*(p/10));
        }
        
         
        else if (a == 0){
            printf("----------------------------\n[ 과목 코드 안내표 ]\n\n보통 과목: 국어(01), 수학(02), 영어(03), 통합사회(04), 통합과학(05)\n전공 과목: 컴시일(10), 프로그래밍(13)\n----------------------------\n");
            count += 1;
        }
        
        else{
            printf("잘못된 값을 출력요청 하였습니다. 다시 입력 해주시기 바랍니다");
            count+=1;
        }
    }
}

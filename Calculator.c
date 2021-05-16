#include <stdio.h>

int main()
{
    int count;
    int a, b;
    
    printf("필요한 계산기의 횟수를 입력하시오 : ");
    scanf("%d", &count);
    
    for(; count>0; count--){
        printf("주요과목(국어/수학/사회/영어) : 0\n과학(정보/솦과) : 1\n전공 상대(컴시일/솦과) : 2\n\n선택 후, 입력하세요");
        scanf("%d", &a);
        
        if (a == 0){
            printf("주요 과목의 석차를 입력하세요 : ");
            scanf("%d", &b);
            
            if (b<=11) printf("1등급");
            else if (b<=30) printf("2등급"); 
            else if (b<=62) printf("3등급"); 
            else if (b<=107) printf("4등급"); 
            else if (b<=160) printf("5등급");
            
            else printf("이 이상 계산하는게 의미가 있어?");
        }
        
        else if (a == 1){
            printf("과학 과목의 석차를 입력하세요 : ");
            scanf("%d", &b);
            
            if (b<=5) printf("1등급");
            else if (b<=15) printf("2등급"); 
            else if (b<=31) printf("3등급"); 
            else if (b<=53) printf("4등급"); 
            else if (b<=80) printf("5등급");
            
            else printf("이 이상 계산하는게 의미가 있어?");
        }
        
        else if (a == 2){
            printf("전공 - 컴시일 과목의 석차를 입력하세요 : ");
            scanf("%d", &b);
            
            if (b<=3) printf("1등급");
            else if (b<=8) printf("2등급"); 
            else if (b<=19) printf("3등급"); 
            else if (b<=30) printf("4등급"); 
            else if (b<=43) printf("5등급");
            
            else printf("이 이상 계산하는게 의미가 있어?");
        }
    }
}

#include <stdio.h>
#include <stdlib.h>
//#include <time.h>

void main()
{
    char chicken;
    int date,tem,sum, condition, i , j, egg;
    int a,b,c,d;
    int sum2=sum2+sum;
    sum2=0;
    sum=0;
   // srand(unsigned(time(NULL)));//랜덤 함수 쓸때 랜덤 하게 하려고

    printf("닭이 알을 얼마나 낳는지 고르는 프로그램입니다.\n\n");
    
    
    while(1)
    {

        printf("닭 a,b,c 중 고르시오 : ");
        scanf("%c", &chicken);
        //chicken = getchar();  <- 요거 여기 넣으면 닭 a,b,c 중 고르시오만 뜸
        
        if(chicken == 'a' || chicken == 'b' || chicken == 'c')
        {
            break;
        }
        else
        {
            printf("잘못입력하셨습니다. 다시 입력하십시오.\n\n");
            //getchar();      // 남은 공간을 지우기 위해 사용
        }

    }   

    printf("몇일 동안 알을 낳는지 기간을 선택하시오(숫자로만) : ");
    scanf("%d",&date);
    
    
    
    while(1){
        printf("닭의 건강상태를 고르시오 1~10까지 : ");
        scanf("%d",&condition);
        if(condition<=10)
        {
        break;
        }
        else
        {
            printf("잘못입력하셨습니다.\n\n");
            getchar();      // 남은 공간을 지우기 위해 사용
        }
    }
    
    if(chicken == 'a')
    {
        if(condition>=8)
            egg = rand()%3+8; //8~10개 랜덤으로 나옴
        else if(condition >= 4 && condition <=7)
            egg = rand()%3+5; // 5~7개
        else
            egg = rand()%3+3;// 3~5개
    }
    else if(chicken == 'b')
    {
        if(condition >= 8)
            egg = rand()%3+10; //10~12개
        else if(condition >= 4 && condition <=7)
            egg = rand()%3+7; //7~9개
        else
            egg = rand()%3+5; //5~7개

    }
    else
    {
        if(condition >= 8)
            egg = rand()%3+7; //7~9개
        else if(condition >= 4 && condition <= 7)
            egg = rand()%3+5; //5~7개
        else
            egg = rand()%3+4; //4~6개
    }
    


    
    while(1)
    {
        printf("닭장 온도를 선택하세요 20~40까지 : ");
        scanf("%d",&tem);
        if(tem>=20 && tem <= 25)
        {
            egg = egg - 3;
            break;

        }
        else if(tem <= 35 && tem >= 26){
            egg = egg + rand()%3+5; //5~7개 더하기
            break;
        }
        else if(tem >=27 && tem <= 40){
            egg = egg + rand()%3+10; // 10~12개 더하기
            break;
        }
        else{
            printf("잘못 입력하셨습니다.");
            getchar();
        }
    }
    for(i=1;i<date;i++)
    {
        sum=(egg * i); 
        
        sum2=sum2+sum;
    }
    printf("\n총합 %d개\n",sum);
      
}
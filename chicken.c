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
   // srand(unsigned(time(NULL)));//���� �Լ� ���� ���� �ϰ� �Ϸ���

    printf("���� ���� �󸶳� ������ ���� ���α׷��Դϴ�.\n\n");
    
    
    while(1)
    {

        printf("�� a,b,c �� ���ÿ� : ");
        scanf("%c", &chicken);
        //chicken = getchar();  <- ��� ���� ������ �� a,b,c �� ���ÿ��� ��
        
        if(chicken == 'a' || chicken == 'b' || chicken == 'c')
        {
            break;
        }
        else
        {
            printf("�߸��Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ�.\n\n");
            //getchar();      // ���� ������ ����� ���� ���
        }

    }   

    printf("���� ���� ���� ������ �Ⱓ�� �����Ͻÿ�(���ڷθ�) : ");
    scanf("%d",&date);
    
    
    
    while(1){
        printf("���� �ǰ����¸� ���ÿ� 1~10���� : ");
        scanf("%d",&condition);
        if(condition<=10)
        {
        break;
        }
        else
        {
            printf("�߸��Է��ϼ̽��ϴ�.\n\n");
            getchar();      // ���� ������ ����� ���� ���
        }
    }
    
    if(chicken == 'a')
    {
        if(condition>=8)
            egg = rand()%3+8; //8~10�� �������� ����
        else if(condition >= 4 && condition <=7)
            egg = rand()%3+5; // 5~7��
        else
            egg = rand()%3+3;// 3~5��
    }
    else if(chicken == 'b')
    {
        if(condition >= 8)
            egg = rand()%3+10; //10~12��
        else if(condition >= 4 && condition <=7)
            egg = rand()%3+7; //7~9��
        else
            egg = rand()%3+5; //5~7��

    }
    else
    {
        if(condition >= 8)
            egg = rand()%3+7; //7~9��
        else if(condition >= 4 && condition <= 7)
            egg = rand()%3+5; //5~7��
        else
            egg = rand()%3+4; //4~6��
    }
    


    
    while(1)
    {
        printf("���� �µ��� �����ϼ��� 20~40���� : ");
        scanf("%d",&tem);
        if(tem>=20 && tem <= 25)
        {
            egg = egg - 3;
            break;

        }
        else if(tem <= 35 && tem >= 26){
            egg = egg + rand()%3+5; //5~7�� ���ϱ�
            break;
        }
        else if(tem >=27 && tem <= 40){
            egg = egg + rand()%3+10; // 10~12�� ���ϱ�
            break;
        }
        else{
            printf("�߸� �Է��ϼ̽��ϴ�.");
            getchar();
        }
    }
    for(i=1;i<date;i++)
    {
        sum=(egg * i); 
        
        sum2=sum2+sum;
    }
    printf("\n���� %d��\n",sum);
      
}
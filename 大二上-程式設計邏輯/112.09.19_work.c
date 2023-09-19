#include <stdio.h>

void issue1(){
	system("cls");
	int WrongQ, Score = 100;
	float Question = 2.5;
	char Level = 'A';
	char Name[16];
	
	printf("請輸入姓名(Name)、與答錯的題數(WrongQ)：");
	scanf("%s %d",&Name,&WrongQ);
	int score_int = (int)(Score - WrongQ * Question);
	float score_float = Score - WrongQ * Question;
	printf("學生姓名：%s\n成績(整數)：%d\n成績(浮點數)：%.2f\n等級：%c",Name,score_int,score_float,Level);
}

void issue2(){
	system("cls");
	int n;
	printf("請輸入一數值，用其來代表身高級距：");
	while(scanf("%d",&n) != EOF){
		system("cls");
		printf("身高為：%dCM\n",n);
		if (n <= 150) printf("有點矮喔");
		else if (n >= 151 && n < 180) printf("中等身高");
		else if (n >= 180) printf("高人一等");
		printf("\n請輸入一數值，用其來代表身高級距：");
	}
}

void issue3(){
	system("cls");
	int n;
	printf("請輸入任意整數(小於100)：");
	while(scanf("%d",&n) != EOF){
		system("cls");
		printf("輸入數字為：%d\n",n);
		int sum,i;
		if (n >= 100) {
			printf("輸入值大於等於100，無效輸入請重來\n");
			printf("請輸入任意整數(小於100)：");
			sum=0;
			continue;
		}
		else{
			for (i=1; i<=n; i++)	sum+=i*i;
			printf("總和為：%d",sum);
		}
		printf("\n請輸入任意整數(小於100)：");
		sum=0;
	}
}


main(){
	printf("選擇你要前往的題目(1、2、3)：");
	int n;
	while (scanf("%d",&n) != EOF){
		switch(n){
			case 1:
				issue1();
				break;
			case 2:
				issue2();
				break;
			case 3:
				issue3();
				break;
			default:
				printf("無此編號，請輸入(1、2、3)：");
				break;
		}
	}
	
}

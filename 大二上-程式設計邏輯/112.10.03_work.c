#include <stdio.h>
#include <math.h>


int conti(){
	int keep;
	printf("\n\n---------------\n(繼續請輸入1)：");
	scanf("%d",&keep);
	if (keep == 1) {
		system("cls");
		return 1;
	}
	else{
		system("cls");
		printf("請輸入要前往的題目：");
		return 0;
	}
}
 
issue1(){
	float h,w;
	int keep;
	
	while (1){
	
		printf("請輸入身高：");
		scanf("%f",&h);
		printf("請輸入體重：");
		scanf("%f",&w);
		float bmi = w/(h*h/10000);
		printf("=====================\nBMI=%.2f(%s)",bmi, bmi<18.5?"體重過輕":(bmi>=18.5) && (bmi <23)?"體重適中":"體重過重");
		
		if (!(conti())){
			return;
		}
	}
}


issue2(){
	int keep;
	char ch;
	
	printf("請輸入分數群組：");
	while(scanf(" %c",&ch)){
		printf("===========\n");
		
		switch(ch){		
			case 'A':
			case 'a':
				printf("分數在90以上");
				break;
				
			case 'B':
			case 'b':
				printf("分數在70~79分之間");
				break;
			
			case 'C':
			case 'c':
				printf("你被當掉了");
				break;
			
			default:
				printf("沒有此分數群組");
				break;			
		}
		
		if (!(conti())) return;
		printf("請輸入分數群組：");
	
	}	
}


issue3(){
	int normal,keep;	
	float credit,year,loan;
	
	while(1){
		printf("請輸入信用額度：");
		scanf("%f",&credit);
		
		printf("繳款是否正常(1:正常,0:不正常)：");
		scanf("%d",&normal);
		
		if (normal){
			printf("請輸入持卡年份：");
			scanf("%f",&year);
			loan = year < 0.5 ? 0 : (year >= 0.5) && (year < 1) ? credit/20: credit/10;
		} 
		printf("預借現金金額為%.0f元",loan);
		
	if (!(conti())) return;
	}	
}


issue4(){
	int year,keep;
	
	printf("請輸入西元年分：");
	
	while(scanf("%d",&year) != EOF){

		printf("============\n");
		if ((year%4 == 0) && ((year%100 != 0) || (year % 400 == 0))){
			printf("%d是閏年",year);
		}
		else{
			printf("%d是平年",year);
		}
		
		
		if (!(conti())) return;
		printf("請輸入西元年分：");
	}
}

issue4_testing(){
	int year;
	for(year = 2000; year <= 2050; year++){ 
		printf("\n");
		if ((year%4 == 0) && ((year%100 != 0) || (year % 400 == 0))){
			printf("-----------%d是閏年------------",year);
		}
		else{
			printf("%d是平年",year);
		}
	} 
}

main(){
	int issue;
	printf("請輸入要前往的題目：");
	while(scanf("%d",&issue) != EOF){
		switch(issue){
			case 1:
				system("cls");
				issue1();
				break;
			case 2:
				system("cls");
				issue2();
				break;
			case 3:
				system("cls");
				issue3();
				break;
			case 4:
				system("cls");
				issue4();
				break;
			case 5:
				system("cls");
				issue4_testing();
				break;
			default:
				printf("\n無此選項");
				break;	
		}
		
	}
	
}

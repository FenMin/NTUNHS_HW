#include <stdio.h>
#include <stdlib.h>

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
		return 0;
	}
}


void issue1(){
	int num , i;
	
	while(1){
		printf("請輸入一整數："); 
		scanf("%d", &num);
		printf("===================\n");
		printf("%d的因數包含",num); 
		for (i=1; i<=num; i++){
			if (!(num%i)) printf("%d ",i);
		}
		if(!(conti())) return;
		
	}
}


void issue2(){
	int num,i,max=0,min=20000;
	
	while (1){
		int total = 0;
		
		for (i=0; i<5; i++){
			printf("請輸入一整數：");
			scanf("%d",&num);
			if (num == 0){
				printf("程式結束");
				break;
			}
			if (i == 0) min = num;
				
			if (num > max) max = num;
			else if (num < min) min = num;
			total+=num;
			
			
			
			printf("\n最大值：%d" ,  max);
			printf("\n最小值：%d" ,  min);
			printf("\n平均值：%.2lf\n", (double)total/(i+1));
		}
		if (!(conti())) return;	
	}
}

issue3(){
	int num , i;
	
	while(1){
		printf("請輸入一整數：");
		scanf("%d",&num);
		printf("==================\n");
		
		if(num == 0) break;
		
		while(num > 0){
			printf("%d",num%10);
			num/=10;
		}
		printf("\n");
	}
	if (!(conti())) return;
}

int main(){
	int issue;
	while(1){
		printf("請輸入要前往的題目：");
		scanf("%d",&issue);
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
				
			default:
		   		printf("請輸入正確數字");
		   		break;
		}	
	}
}

#include <stdio.h>



void issue1(){
	int hour,keep;
	printf("請輸入停車的時數：");
	
	while(scanf("%d",&hour) != EOF){
		
		if (hour <= 1) printf("不收費");
		else if (hour >= 2) printf("收費金額為(hour*40)：%d",hour*40);
		else printf("請輸入數字");
		
		printf("\n\n===========\n(繼續請輸入1)：");
		scanf("%d",&keep);
		if (keep == 1) {
			system("cls");
			printf("請輸入停車的時數：");
		}
		else return;
	}
}

void issue2(){
	int price,tickets,keep;
	while (1){
	
		printf("每張入場券價格(元)：");
		scanf("%d",&price);
		printf("請輸入顧客欲購買的張數：");
		scanf("%d",&tickets);
		printf("======================\n");
		printf("總價為：%.2f\n",tickets>=10?price*tickets*0.9:price*tickets);
		
		printf("(繼續請輸入1)：");
		scanf("%d",&keep);
		if (keep == 1) system("cls");
		else return;
	}
}
	
void issue3(){
	
	int num,pow,keep;
	printf("請輸入所要計算的數值：");
	
	while (scanf("%d",&num) != EOF){
 		printf("請輸入1(計算平方值)或2(計算立方值)：");
		scanf("%d",&keep);
		printf("======================\n");
		
		printf("%s",keep==1?"平方值為：":"立方值為：");
		printf("%d",keep==1?num*num:num*num*num);
		
		printf("\n(繼續請輸入1)：");
		scanf("%d",&keep);
		if (keep == 1) {
			system("cls");
			printf("請輸入所要計算的數值：");
		}
		else return;
	} 
}


void issue4(){
	int num , keep;
	printf("請輸入一個正整數："); 
	
	
	while(scanf("%d",&num) != EOF){
		
		printf("=============\n");
		printf("%s",(num%2==0 || num%3==0)?"此數為2或3的倍數":"此數非為2或3的倍數");
		printf("\n\n(繼續請輸入1)：");
		scanf("%d",&keep);
		if (keep == 1) {
			system("cls");
			printf("請輸入一個正整數：");
		}
		else return;
	}
}



void issue5(){
	int money,keep; 
	float discount;
	
	printf("客戶購物金額(元)：");
	
	while(scanf("%d",&money)){
		if (money >= 1000 && money < 5000)	discount = 0; 
		else if (money >= 5000 && money < 30000) discount = 10;
		else if (money >= 30000 && money < 100000) discount = 15;
		else if (money > 100000) discount = 20;
		
		printf("=============\n");
		printf("折扣為%.0f%%\n",discount);
		printf("實付為%.0f元",money*(1-discount*0.01));	
		if (keep == 1) {
			system("cls");
			printf("客戶購物金額(元)：");
		}
		else return;
	}
}

int main(){

  	int issue;
	
	printf("請輸入要前往的題目：");
	while (scanf("%d",&issue)){
   		switch (issue){
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
   				issue5();
   				break;
   			
   			default:
   				printf("查無此題");
		   }
   }
} 

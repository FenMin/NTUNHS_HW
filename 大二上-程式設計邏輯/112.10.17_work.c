#include <stdio.h>

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

void sleep_count(int stime){
	for (stime; stime>0; stime--){
		printf("密碼錯誤太多，已被鎖五秒，目前第： %d 秒\n",stime);
		sleep(1); 
	}
}

void issue1(){
    int n,total=0;
   
    printf("請輸入一整數:");
    while (scanf("%d",&n)){
        if(n < 0){
            printf("================\n程式結束\n\n---------------\n");
            return;
        }
        total+=n;
        printf("==================\n");
        printf("總和為%d\n",total);
        printf("請輸入一整數：");
       
    }
   
}

void issue2(){
    while(1){
    	int n,total=1;
    	printf("請輸入一整數：");
    	scanf("%d",&n);
    	printf("====================\n");
    	printf("%d! = ",n);
    	
		for(n; n>0; n--) total*=n;
		printf("%d",total);
		if (!(conti())){
    		return;
		}
	}
}

void issue3(){

	while (1){
		int pw , counter=0 , correct = 1234;
		printf("請輸入一密碼：");
		scanf("%d",&pw);
		printf("====================================\n");
		
		while (pw != correct){
			counter+=1;
			printf("密碼錯誤-------目前錯誤【%d】次\n",counter);
			if (counter >=3 && counter < 5){
				sleep_count(5);
			}
			else if (counter >= 5){
				printf("錯誤次數過多");
				counter = 0;
				if (!(conti())) return;
			}
			printf("請輸入一整數：");
			scanf("%d",&pw);
			printf("====================================\n");
		}
		
		printf("密碼正確,共輸入【%d】次",counter+1);
		if (!(conti())) return;
	}



} 

int main()
{
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


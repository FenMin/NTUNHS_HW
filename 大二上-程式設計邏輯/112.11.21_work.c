#include <stdio.h>
#include <string.h>


int _keep(){
	char keep[2];
	
	printf("是否繼續輸入(Y/N)？");
	gets(keep);
	
	if ((!(strcmp(keep , "y"))) || (!(strcmp(keep , "Y")))){
		return 1;
	} 
	else{
		return 0;
	}
}


int main(){
	char name[5][64];
	char phone[5][64];
	char keep;
	int times = 0;
	//第一個刪掉 , 下往上移動 
	while(1){
		if (times < 5){
			printf("請輸入姓名：");
			gets(name[times]);
			printf("請輸入電話：");
			gets(phone[times]);
			
			for (int x=0; x<=times; x++){
				printf("%s   %s\n",name[x],phone[x]);
			}
			times++;
		}
		
		else {
			for (int i=0; i<4; i++){
				strcpy(name[i],name[i+1]);
				strcpy(phone[i],phone[i+1]);
			}
			
			printf("請輸入姓名：");
			gets(name[4]);
			printf("請輸入電話：");
			gets(phone[4]);
			for (int x=0; x<5; x++){
				printf("%s   %s\n",name[x],phone[x]);
			}
			
		}
		printf("=========================\n");
		if (!(_keep())) return;
	}
}
	
	
	

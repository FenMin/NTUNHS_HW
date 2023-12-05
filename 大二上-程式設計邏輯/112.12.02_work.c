#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

FILE *fp;
void printout(int count){

	char name_read[10] = {0};
	char name[10];
	int count_read=99999;
	
	fp = fopen("score.txt", "r");
	fscanf(fp, "%s %d", name_read , &count_read);
	fclose(fp);	
	if ( count > count_read){
		printf("最高分：%s %d次",name_read,count_read);
	}
	
	else if (count <= count_read || *name_read){
		printf("你為最高分，請輸入您的姓名：");
		scanf("%s",&name);
		fp = fopen("score.txt", "w");
		fprintf(fp, "%s %d", name, count);
		fclose(fp);	
	}

}


void guess(){
	srand(time(NULL));
	char name[10];
	int guess_num = rand()%100+1;
	int num = 0 , count=0;
	
	printf("right answer = %d\n\n",guess_num);
	
	while (num != guess_num){
		printf("猜數字(1~100)：");
		scanf("%d",&num);
		printf("=============\n");
		count++;
			
		if (num == guess_num){
			printf("Bingo (你猜了%d次)\n",count);
			printout(count);
		}
		else if (num > guess_num) printf("太大了\n");
		else printf("太小了\n");
	}	
}


int main(){
	guess();
}

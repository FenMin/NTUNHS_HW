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
		printf("�̰����G%s %d��",name_read,count_read);
	}
	
	else if (count <= count_read || *name_read){
		printf("�A���̰����A�п�J�z���m�W�G");
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
		printf("�q�Ʀr(1~100)�G");
		scanf("%d",&num);
		printf("=============\n");
		count++;
			
		if (num == guess_num){
			printf("Bingo (�A�q�F%d��)\n",count);
			printout(count);
		}
		else if (num > guess_num) printf("�Ӥj�F\n");
		else printf("�Ӥp�F\n");
	}	
}


int main(){
	guess();
}

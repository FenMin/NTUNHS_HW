#include <stdio.h>



void issue1(){
	int hour,keep;
	printf("�п�J�������ɼơG");
	
	while(scanf("%d",&hour) != EOF){
		
		if (hour <= 1) printf("�����O");
		else if (hour >= 2) printf("���O���B��(hour*40)�G%d",hour*40);
		else printf("�п�J�Ʀr");
		
		printf("\n\n===========\n(�~��п�J1)�G");
		scanf("%d",&keep);
		if (keep == 1) {
			system("cls");
			printf("�п�J�������ɼơG");
		}
		else return;
	}
}

void issue2(){
	int price,tickets,keep;
	while (1){
	
		printf("�C�i�J�������(��)�G");
		scanf("%d",&price);
		printf("�п�J�U�ȱ��ʶR���i�ơG");
		scanf("%d",&tickets);
		printf("======================\n");
		printf("�`�����G%.2f\n",tickets>=10?price*tickets*0.9:price*tickets);
		
		printf("(�~��п�J1)�G");
		scanf("%d",&keep);
		if (keep == 1) system("cls");
		else return;
	}
}
	
void issue3(){
	
	int num,pow,keep;
	printf("�п�J�ҭn�p�⪺�ƭȡG");
	
	while (scanf("%d",&num) != EOF){
 		printf("�п�J1(�p�⥭���)��2(�p��ߤ��)�G");
		scanf("%d",&keep);
		printf("======================\n");
		
		printf("%s",keep==1?"����Ȭ��G":"�ߤ�Ȭ��G");
		printf("%d",keep==1?num*num:num*num*num);
		
		printf("\n(�~��п�J1)�G");
		scanf("%d",&keep);
		if (keep == 1) {
			system("cls");
			printf("�п�J�ҭn�p�⪺�ƭȡG");
		}
		else return;
	} 
}


void issue4(){
	int num , keep;
	printf("�п�J�@�ӥ���ơG"); 
	
	
	while(scanf("%d",&num) != EOF){
		
		printf("=============\n");
		printf("%s",(num%2==0 || num%3==0)?"���Ƭ�2��3������":"���ƫD��2��3������");
		printf("\n\n(�~��п�J1)�G");
		scanf("%d",&keep);
		if (keep == 1) {
			system("cls");
			printf("�п�J�@�ӥ���ơG");
		}
		else return;
	}
}



void issue5(){
	int money,keep; 
	float discount;
	
	printf("�Ȥ��ʪ����B(��)�G");
	
	while(scanf("%d",&money)){
		if (money >= 1000 && money < 5000)	discount = 0; 
		else if (money >= 5000 && money < 30000) discount = 10;
		else if (money >= 30000 && money < 100000) discount = 15;
		else if (money > 100000) discount = 20;
		
		printf("=============\n");
		printf("�馩��%.0f%%\n",discount);
		printf("��I��%.0f��",money*(1-discount*0.01));	
		if (keep == 1) {
			system("cls");
			printf("�Ȥ��ʪ����B(��)�G");
		}
		else return;
	}
}

int main(){

  	int issue;
	
	printf("�п�J�n�e�����D�ءG");
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
   				printf("�d�L���D");
		   }
   }
} 

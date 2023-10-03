#include <stdio.h>
#include <math.h>


int conti(){
	int keep;
	printf("\n\n---------------\n(�~��п�J1)�G");
	scanf("%d",&keep);
	if (keep == 1) {
		system("cls");
		return 1;
	}
	else{
		system("cls");
		printf("�п�J�n�e�����D�ءG");
		return 0;
	}
}
 
issue1(){
	float h,w;
	int keep;
	
	while (1){
	
		printf("�п�J�����G");
		scanf("%f",&h);
		printf("�п�J�魫�G");
		scanf("%f",&w);
		float bmi = w/(h*h/10000);
		printf("=====================\nBMI=%.2f(%s)",bmi, bmi<18.5?"�魫�L��":(bmi>=18.5) && (bmi <23)?"�魫�A��":"�魫�L��");
		
		if (!(conti())){
			return;
		}
	}
}


issue2(){
	int keep;
	char ch;
	
	printf("�п�J���Ƹs�աG");
	while(scanf(" %c",&ch)){
		printf("===========\n");
		
		switch(ch){		
			case 'A':
			case 'a':
				printf("���Ʀb90�H�W");
				break;
				
			case 'B':
			case 'b':
				printf("���Ʀb70~79������");
				break;
			
			case 'C':
			case 'c':
				printf("�A�Q���F");
				break;
			
			default:
				printf("�S�������Ƹs��");
				break;			
		}
		
		if (!(conti())) return;
		printf("�п�J���Ƹs�աG");
	
	}	
}


issue3(){
	int normal,keep;	
	float credit,year,loan;
	
	while(1){
		printf("�п�J�H���B�סG");
		scanf("%f",&credit);
		
		printf("ú�ڬO�_���`(1:���`,0:�����`)�G");
		scanf("%d",&normal);
		
		if (normal){
			printf("�п�J���d�~���G");
			scanf("%f",&year);
			loan = year < 0.5 ? 0 : (year >= 0.5) && (year < 1) ? credit/20: credit/10;
		} 
		printf("�w�ɲ{�����B��%.0f��",loan);
		
	if (!(conti())) return;
	}	
}


issue4(){
	int year,keep;
	
	printf("�п�J�褸�~���G");
	
	while(scanf("%d",&year) != EOF){

		printf("============\n");
		if ((year%4 == 0) && ((year%100 != 0) || (year % 400 == 0))){
			printf("%d�O�|�~",year);
		}
		else{
			printf("%d�O���~",year);
		}
		
		
		if (!(conti())) return;
		printf("�п�J�褸�~���G");
	}
}

issue4_testing(){
	int year;
	for(year = 2000; year <= 2050; year++){ 
		printf("\n");
		if ((year%4 == 0) && ((year%100 != 0) || (year % 400 == 0))){
			printf("-----------%d�O�|�~------------",year);
		}
		else{
			printf("%d�O���~",year);
		}
	} 
}

main(){
	int issue;
	printf("�п�J�n�e�����D�ءG");
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
				printf("\n�L���ﶵ");
				break;	
		}
		
	}
	
}

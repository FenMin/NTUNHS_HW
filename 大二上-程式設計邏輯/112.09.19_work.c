#include <stdio.h>

void issue1(){
	system("cls");
	int WrongQ, Score = 100;
	float Question = 2.5;
	char Level = 'A';
	char Name[16];
	
	printf("�п�J�m�W(Name)�B�P�������D��(WrongQ)�G");
	scanf("%s %d",&Name,&WrongQ);
	int score_int = (int)(Score - WrongQ * Question);
	float score_float = Score - WrongQ * Question;
	printf("�ǥͩm�W�G%s\n���Z(���)�G%d\n���Z(�B�I��)�G%.2f\n���šG%c",Name,score_int,score_float,Level);
}

void issue2(){
	system("cls");
	int n;
	printf("�п�J�@�ƭȡA�Ψ�ӥN�����ŶZ�G");
	while(scanf("%d",&n) != EOF){
		system("cls");
		printf("�������G%dCM\n",n);
		if (n <= 150) printf("���I�G��");
		else if (n >= 151 && n < 180) printf("��������");
		else if (n >= 180) printf("���H�@��");
		printf("\n�п�J�@�ƭȡA�Ψ�ӥN�����ŶZ�G");
	}
}

void issue3(){
	system("cls");
	int n;
	printf("�п�J���N���(�p��100)�G");
	while(scanf("%d",&n) != EOF){
		system("cls");
		printf("��J�Ʀr���G%d\n",n);
		int sum,i;
		if (n >= 100) {
			printf("��J�Ȥj�󵥩�100�A�L�Ŀ�J�Э���\n");
			printf("�п�J���N���(�p��100)�G");
			sum=0;
			continue;
		}
		else{
			for (i=1; i<=n; i++)	sum+=i*i;
			printf("�`�M���G%d",sum);
		}
		printf("\n�п�J���N���(�p��100)�G");
		sum=0;
	}
}


main(){
	printf("��ܧA�n�e�����D��(1�B2�B3)�G");
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
				printf("�L���s���A�п�J(1�B2�B3)�G");
				break;
		}
	}
	
}

#include <stdio.h>

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
		return 0;
	}
}

void sleep_count(int stime){
	for (stime; stime>0; stime--){
		printf("�K�X���~�Ӧh�A�w�Q�꤭��A�ثe�ġG %d ��\n",stime);
		sleep(1); 
	}
}

void issue1(){
    int n,total=0;
   
    printf("�п�J�@���:");
    while (scanf("%d",&n)){
        if(n < 0){
            printf("================\n�{������\n\n---------------\n");
            return;
        }
        total+=n;
        printf("==================\n");
        printf("�`�M��%d\n",total);
        printf("�п�J�@��ơG");
       
    }
   
}

void issue2(){
    while(1){
    	int n,total=1;
    	printf("�п�J�@��ơG");
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
		printf("�п�J�@�K�X�G");
		scanf("%d",&pw);
		printf("====================================\n");
		
		while (pw != correct){
			counter+=1;
			printf("�K�X���~-------�ثe���~�i%d�j��\n",counter);
			if (counter >=3 && counter < 5){
				sleep_count(5);
			}
			else if (counter >= 5){
				printf("���~���ƹL�h");
				counter = 0;
				if (!(conti())) return;
			}
			printf("�п�J�@��ơG");
			scanf("%d",&pw);
			printf("====================================\n");
		}
		
		printf("�K�X���T,�@��J�i%d�j��",counter+1);
		if (!(conti())) return;
	}



} 

int main()
{
	int issue;
	while(1){
		printf("�п�J�n�e�����D�ءG");
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
		   		printf("�п�J���T�Ʀr");
		   		break;
		}
	}
}


#include <stdio.h>
#include <time.h>
#include <windows.h>


int f(int num){
	int i,total=1;
	for (i=2; i<=num; i++){
		total*=i;
	}
	return total;
}

int isPrime(int num){
	int i;
	for (i=2; i<num; i++){
		if (!(num%i)) return 0;
		
	}
	return 1;
}

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


issue1(){
	srand (time(NULL)); 
	int answer = rand()%100+1;
	int guess_num;
	
	while (1){
		printf("�п�J�@���(1~100)�G");
		scanf("%d",&guess_num);
		printf("=======================\n");
		
		
		if (guess_num == answer){
			printf("Bingo");
			if(!(conti())) return;
		}
		
		else if(guess_num > answer && guess_num != 0){
			printf("�Ӥj�F��\n");
		} 
		
		else if(guess_num == 0){
			printf("\n---------------\n���׬O%d\n---------------\n\n\n\n",answer);
		}
		
		else{
			printf("�Ӥp�F��\n");
		}	
	}	
}


issue2(){
	int i,y;
	
	for (i=1; i<10; i++){
		for (y=1; y<10; y++){
			printf("%d*%d=%d\t",i,y,i*y);
		}
		printf("\n");
	}
	
	printf("\n\n");
}

issue3(){
	int height,i,y,z;
	
	
	while(1){
	
		printf("�п�J�T���ΰ���(��J�u0�v�h�M������)�G");
		scanf("%d",&height);
		
		if (!(height)) system("cls");
		
		
		for (i=0; i<height; i++){
			for (y=0; y<=i; y++){
				Sleep(50);
				printf("*");
			}
			printf("\n");
		}
		
		printf("\n\n");
		
		
		for (i=height; i>0; i--){
			for(y=i; y>0; y--){
				Sleep(50);
				printf("*");
			}
			printf("\n");
		}
		
		for(i=height; i>0; i--){
			//for space
			for (y=i-1; y>0; y--){
				printf(" ");
			}
			
			//for *
			for(z=(height-i)*2+1; z>0; z--){
				Sleep(50);
				printf("*");
			}
			printf("\n");
		}
		
		if(!(conti())) return;
	}
	
}


issue4(){
	int num,i;
	
	while(1){
		printf("�п�J�@��ơG");
		scanf("%d",&num);
		printf("================\n");
	
		for (i=1; i<=num; i++){
			printf("%d!=%d\n",i,f(i));
		}
		if(!(conti())) return;
	}	
	
	
}

issue5(){
	int num,i;
	
	
	while(1){
		int isP = 1;
		printf("�п�J�@��ơG");
		scanf("%d",&num);
		printf("===============\n");
		if (num == 0) return;
		
		for (i=2; i<num; i++){
			if (!(num%i)) isP = 0; 
			break;
		}
		
		if (isP) printf("%d�����\n",num);
		else printf("%d�D���\n",num);
	}
}

issue6(){
	int num,isP=1,i;
	
	
	
	while(1){
		printf("�п�J�@��ơG");
		scanf("%d",&num);
		printf("===============\n");
		printf("�p��%d����Ʀ��G",num);
		for(i=2; i<num; i++){
			if (isPrime(i)) printf("%d ",i);
		} 
		if(!(conti())) return;
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
		
			case 4:
				system("cls");
				issue4();
				break;
				
			case 5:
				system("cls");
				issue5();
				break;
				
			case 6:
				system("cls");
				issue6();
				break;
				
			default:
		   		printf("�п�J���T�Ʀr");
		   		break;
		}
	}
}


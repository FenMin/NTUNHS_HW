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



issue1(){
	while (1){
		int n_array[100] = {0};
		int n=0, temp, check_num;
		for (int i=0; i<100; i++){
			printf("�п�J��%d�Ӿ�ơG",i+1);
			scanf("%d",&temp);
			if (temp == -1){
				printf("=====================\n");
				printf("�п�J���P�_���ȡG");
				scanf("%d" , &check_num);
				printf("=====================\n");
				for(n=0; n<100; n++){
					if ((n_array[n] == check_num) && (n_array[n] != 0)){
						printf("%d����J����%d�Ӿ��",check_num,n+1); 
						if (!(conti())) return;
					}
				}
				printf("%d���b����J���Ȥ�",check_num);
				if (!(conti())) return;
			}
			n_array[i] = temp;
		}	
	}
}

issue2(){
	while (1){ 
		int score[3][3] = {0} , index;
		
		for(int i=0; i<3; i++){
			for (int y=0; y<3; y++){
				printf("�п�J��%d�쪺%s%s�G" , i+1 , (y==0 ? "���": (y==1) ? "�^��" : "�ƾ�") , "���Z");
				scanf("%d",&score[i][y]);                                                         
			}
		}
		
		printf("=======================\n");
		printf("�п�J���P�_���P�ǡG");
		scanf("%d",&index);
		printf("=======================\n");
		printf("��%d��P�Ǫ����Z���G���%d���A�^��%d���A�ƾ�%d��",index,score[index-1][0], score[index-1][1], score[index-1][2]);
		
		if (!(conti())) return;
	} 
}


issue3(){
		while (1){ 
		int score[3][3] = {0};
		int personal[3][2] , temp[2]; //[3][3] = {{player1, total} , ...}
		int total=0 , higher=0;
		float average=0;
		
		for(int i=0; i<3; i++){
			for (int y=0; y<3; y++){
				printf("�п�J��%d�쪺%s%s�G" , i+1 , (y==0 ? "���": (y==1) ? "�^��" : "�ƾ�") , "���Z");
				scanf("%d",&score[i][y]);
				total+=score[i][y];
				
				if (y == 2) {
					personal[i][0] = i+1;
					personal[i][1] = total; 
					total = 0;
				}
			}
		}
		printf("=======================\n");
		for (int n=0; n<2; n++){ //bubble swap
			if (personal[n+1][1] > personal[n][1]){ //if next up than previous , swap them
				temp[0] = personal[n][0];
				temp[1] = personal[n][1];
				
				personal[n][0]= personal[n+1][0]; 
				personal[n][1]= personal[n+1][1];
				
				personal[n+1][0] = temp[0];
				personal[n+1][1] = temp[1];
			}
		}
		
		for (int y=0; y<3; y++){
			average = (score[personal[y][0]-1][0] + score[personal[y][0]-1][1] + score[personal[y][0]-1][2]) / 3.0;
			printf("%d. ��%d��P�ǡG���%d���A�^��%d���A�ƾ�%d���A�`��%d���A����%.2f��\n", y+1, personal[y][0], score[personal[y][0]-1][0], score[personal[y][0]-1][1], score[personal[y][0]-1][2], personal[y][1], average);
		}
		
		if(!(conti())) return;
		
	} 
	
	
}


main(){
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

#include <stdio.h>
#include <string.h>

int main(){
	
	char User[10][16] ={"User1", "User2", "User3", "User4", 
						"User5", "User6", "User7", "User8", "User9", "User10"};
	char Pass[10][16] ={"Pass1", "Pass2", "Pass3", "Pass4", 
	 					"Pass5", "Pass6", "Pass7", "Pass8", "Pass9", "Pass10"};
	
	char ac[10];
	char pw[10];
	
	int userlen = sizeof(User)/sizeof(User[0]);
	int pwlen = sizeof(Pass)/sizeof(Pass[0]);
	
	printf("�п�J�b���G");
	scanf("%s", &ac);
	
	printf("�п�J�K�X�G");
	scanf("%s", &pw);
	
	for (int i = 0; i < userlen; i++){
		if (strcmp(strupr(User[i]) , strupr(ac)) == 0){
			for (int x = 0; x < pwlen; x++){
				if (strcmp(Pass[x] , pw) == 0 && i==x){
					printf("�b���K�X���T");
					return 0;
				} 
				else if (x == pwlen-1){
					printf("�K�X���~");
					return 1;
				}
			}
		}
		
		else if (i == userlen-1){
			printf("�L���b��");
			return 1;
		}
	}
} 

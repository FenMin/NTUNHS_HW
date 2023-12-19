#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 
#include <string.h>


int main(){
	srand(time(NULL));
	char pw[9];
	FILE *fp;
	fp = fopen("users.dat","w");
	for (int i=1; i<=100; i++){
		pw[0] = 2 + '0';
		pw[1] = rand()%26 + 'a';
		pw[2] = rand()%26 + 'A';
		pw[3] = rand()%10 + '0';
		pw[4] = rand()%26 + 'a';
		pw[5] = rand()%26 + 'A';
		pw[6] = rand()%10 + '0';
		pw[7] = rand()%26 + 'a';
		pw[8] = '\0';
		fprintf(fp,"%03d %s\n",i,pw);

	}
	fclose(fp);	
	return 0;
}

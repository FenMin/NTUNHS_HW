#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
  FILE *fp;
  fp = fopen("search.dat", "r");
  char in[64],p[1024];
  int c=0 , flag=0;
  printf("�п�J����r:");
  scanf("%s",in);
  printf("================================\n");
  
  while ((fgets(p,1024,fp))!=NULL){
	if((c<3) && strstr(strlwr(p), strlwr(in))!=NULL) {
    	printf("%s\n",p);
    	c++;
    	flag=1;
	}
  }
  if (!flag) printf("�䤣����!!");
  return 0;
}

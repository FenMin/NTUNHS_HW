#include <stdio.h>
#include <conio.h>
int cut(char x,int i,int j){
	if(x=='+'){
      i=i+j;
      j=0;
    }else if(x=='-'){
      i=i-j;
      j=0;
    }else if(x=='*'){
      i=i*j;
      j=0;
    }else if(x=='/'){
      i=i/j;
      j=0;
    }
    return i;
}
int main(){
  char ch,x='+';
  int i=0,j=0;
  printf("請輸入一四則運算：\n");
  while(1){
    ch = getche();
    if(ch=='='){
    	i=cut(x,i,j);
    	printf("%d",i);
      	return 0;
	}
    else if(ch=='+'||ch=='-'||ch=='*'||ch=='/'){
    	i=cut(x,i,j);
    	j=0;
    	x=ch;
	}
    else{
      j = j*10+(ch-'0');
    }
  }
  return 0;
}

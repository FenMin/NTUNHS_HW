#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  int num,dice[4],t;
  char c;
  while(1){
    srand(time(NULL));
    for(int i=0;i<4;i++){
      num = rand()%6 + 1;
      dice[i]=num;
    }
    for (int i = 0; i < 3; ++i) {
          for (int j = 0; j < 3 - i; ++j) {
              if (dice[j] > dice[j + 1]) {
                  int temp = dice[j];
                  dice[j] = dice[j + 1];
                  dice[j + 1] = temp;
              }
          }
      }
    printf("��l�I�Ƭ��G");
    for(int i=0;i<4;i++){
      printf("%d ",dice[i]);
    }
    printf("\n=====================\n");
    if(dice[0]==dice[1]&&dice[1]==dice[2]&&dice[2]==dice[3]){
      printf("���G���@��");
    }
    else if(dice[0]==dice[1]&&dice[2]==dice[3]){
      printf("���G���~�޻�");
    }
    else if((dice[0]==dice[1]&&dice[1]==dice[2])||(dice[1]==dice[2]&&dice[2]==dice[3])){
      printf("���G������");
    }else if(dice[0]==dice[1]){
      printf("���G��%d�I",dice[2]+dice[3]);
    }else if(dice[1]==dice[2]){
      printf("���G��%d�I",dice[0]+dice[3]);
    }else if(dice[2]==dice[3]){
      if(dice[0]+dice[1]==3){
        printf("���G��BG(3�I)");
      }else{
        printf("���G��%d�I",dice[0]+dice[1]);
      }
    }else{
      printf("���G������");
    }
    printf("\n");
    while(1){
      printf("����r���Ρ�R���i���Y�A����q���Ρ�Q������:");
        scanf(" %c",&c);
        if(c=='q'||c=='Q'){
          return 0;
        }else if(c=='r'||c=='R'){
          printf("\n");
		  break;
        }
    }
  
  }
  
  return 0;
}

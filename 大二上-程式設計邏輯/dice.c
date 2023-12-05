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
    printf("骰子點數為：");
    for(int i=0;i<4;i++){
      printf("%d ",dice[i]);
    }
    printf("\n=====================\n");
    if(dice[0]==dice[1]&&dice[1]==dice[2]&&dice[2]==dice[3]){
      printf("結果為一色");
    }
    else if(dice[0]==dice[1]&&dice[2]==dice[3]){
      printf("結果為洗拔辣");
    }
    else if((dice[0]==dice[1]&&dice[1]==dice[2])||(dice[1]==dice[2]&&dice[2]==dice[3])){
      printf("結果為不算");
    }else if(dice[0]==dice[1]){
      printf("結果為%d點",dice[2]+dice[3]);
    }else if(dice[1]==dice[2]){
      printf("結果為%d點",dice[0]+dice[3]);
    }else if(dice[2]==dice[3]){
      if(dice[0]+dice[1]==3){
        printf("結果為BG(3點)");
      }else{
        printf("結果為%d點",dice[0]+dice[1]);
      }
    }else{
      printf("結果為不算");
    }
    printf("\n");
    while(1){
      printf("按’r’或’R’可重擲，按’q’或’Q’結束:");
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

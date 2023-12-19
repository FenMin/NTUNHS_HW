#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main(){
  int c=0,p,temp;
  int ncard[52];
  int tncard[4][13];
  char suit[4][10]={{"S"},{"H"},{"D"},{"C"}};
  char rank[13][10]={{"A"},{"2"},{"3"},{"4"},{"5"},{"6"},{"7"},{"8"},{"9"},{"10"},{"J"},{"Q"},{"K"}};
  char card[52][10];
  char tcard[4][13][10];
  char t[10];
  for(int i=0;i<4;i++){
    for(int j=0;j<13;j++){
      strcpy(card[c],suit[i]); //a="S"
      strcat(card[c],rank[j]); //a= a + "A" //a "SA"
      ncard[c]=c+1;
      c++;
    }
  }
  srand(time(NULL));
  for(int i=0;i<52;i++){
    p = rand()%52;//9
    strcpy(t,card[i]);//t=card[0]
    temp = ncard[i];
    strcpy(card[i],card[p]);////card[0]=card[9]
    ncard[i] = ncard[p];
    strcpy(card[p],t);//card[9]=t
    ncard[p] = temp;
  }
  c=0;
  for(int i=0;i<4;i++){
    for(int j=0;j<13;j++){
      strcpy(tcard[i][j],card[c]);//tcrad[0][0]=card[0] "D3"
      tncard[i][j] = ncard[c];
      c++;
    }
  }
  for(int x=0;x<4;x++){
    for(int i=13;i>1;i--){
      for(int j=0;j<i-1;j++){
        if(tncard[x][j]>tncard[x][j+1]){
          strcpy(t,tcard[x][j]);
          temp = tncard[x][j];
          strcpy(tcard[x][j],tcard[x][j+1]);
          tncard[x][j] = tncard[x][j+1];
          strcpy(tcard[x][j+1],t);
          tncard[x][j+1] = temp;
        }
      }
    }
  }
  for(int i=0;i<4;i++){
    for(int j=0;j<13;j++){
      printf("%s ",tcard[i][j]);
    }
    printf("\n");
  }
  return 0;
}

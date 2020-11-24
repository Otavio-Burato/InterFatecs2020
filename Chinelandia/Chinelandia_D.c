#include "stdio.h"

int count(int *E,int *D,int NPC){
  int i = 0,j,aux = 0,max = 0,aux2 = 0;
  for(i=0;i<NPC;i++){
    if(E[i] > max) max = E[i];
    if(D[i] > max) max = D[i]; 
  }
  i=1;
  while(i<max){
    aux=0;
    {
      for(j=0;j<NPC;j++){
        if(E[j] == i){
          aux++;
        }
      }

      if (aux > 1){
        printf("%d E %d\n",i,(aux-1));
        aux2++;
      }
    }

    aux=0;
    {
      for(j=0;j<NPC;j++){
        if(D[j] == i){
          aux++;
        }
      }

      if (aux > 1){
        printf("%d D %d\n",i,(aux-1));
        aux2++;
      }
    }
    i++;
  }
  return aux2;
}

int main(void) {
  int NPC,i,E,D,aux = 0;

  scanf("%d",&NPC);

  for (i=0; i<NPC; i++){
    int ArrayE[NPC];
    int ArrayD[NPC];

    scanf("%d %d",&E,&D);
    ArrayE[i] = E;
    ArrayD[i] = D;

    if(i == (NPC-1)){
      aux += count(ArrayE,ArrayD,NPC);
      if(aux == 0 ) puts("SEM TROCAS DESTA VEZ");
    }
  }

  return 0;
}


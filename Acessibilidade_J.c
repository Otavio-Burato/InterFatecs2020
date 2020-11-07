#include "stdio.h"

double inclinacao(double H, double C, double L){
  double i;
  i=H*100/C;
  return i;
};

int main(void) {
  double H = -1,C = -1 ,L = -1,i;

  while(H != 0 && C != 0 && L != 0){

    scanf("%lf %lf %lf",&H,&C,&L);

    i = inclinacao(H,C,L);

    if(i<= 8.334 && L >= .8){
      puts("PROJETO SIMPLES");
    }
    else if (H != 0 && C != 0 && L != 0) {
      puts("PROJETO ESPECIAL");
    }

  }

  return 0;
}


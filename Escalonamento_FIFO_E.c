#include<stdio.h>

int main(void){
  int n,i;
  scanf("%d",&n);
  int TC[n], D[n];
  for (i=0;i<n;i++){
    scanf("%d %d",&TC[i],&D[i]);
  }
  int a[n], b[n];
  int tempo[n];
  tempo[0] = 0;
  a[0] = 0;
  for (int i = 1; i < n ; i++)
  {
    tempo[i] = tempo[i-1] + D[i-1];
    a[i] = tempo[i] - TC[i];
    if (a[i] < 0) a[i] = 0;
  }
  for (int i = 0; i < n ; i++) b[i] = D[i] + a[i];
  int total1 = 0, total2 = 0;
  for (int i = 0 ; i < n ; i++) {
    total1 = total1 + a[i];
    total2 = total2 + b[i];
  }
  printf("TME:%.1f\n",(float)total1 / (float)n);
  printf("TMT:%.1f\n",(float)total2 / (float)n);
  return 0;
}


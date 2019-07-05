#include <stdio.h>
#include <stdlib.h>

int main(){
  int i;
  int a[2];
  srand(10);
  for(i=0;i<2;i++){
    a[i]=rand()%6+1;
    printf("die %d: %d\n",i+1,a[i]);
  }
  printf("Total value:%d\n",a[0]+a[1]);

}

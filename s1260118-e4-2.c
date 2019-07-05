#include <stdio.h>
#include <stdlib.h>

int main(){
  printf("What is your name?\n");
  char a[20];
  scanf("%s",a);
  printf("Hello %s\n",a);
  printf("Rolling the dice...\n");

  int i;
  int m[2];
  srand(10);
  for(i=0;i<2;i++){
    m[i]=rand()%6+1;
    printf("die %d: %d\n",i+1,m[i]);
  }
  printf("Total value:%d\n",m[0]+m[1]);

  if(m[0]+m[1] > 7)printf("You win\n");
  else printf("You lost\n");


}

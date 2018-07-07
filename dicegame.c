#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main (){

  int d1,d2;
  char st[1000];

  printf("What is your name?\n");

  printf("> ");

  scanf("%s",st);

  printf("Hello, %s!\n",st);

  srand(time(NULL));

  printf("Rolling the dice...\n");

  d1=rand()%6+1;
  printf("Die 1:%d\n",d1);

  d2=rand()%6+1;
  printf("Die 2:%d\n",d2);

  printf("Total value:%d\n",d1+d2);

  if((d1+d2)>=7)printf("%s won!\n",st);
  else  printf("%s lost!\n",st);
  return 0;
}
	  

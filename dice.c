#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int first,second,total;
  char name[10];
  srand(time(NULL));
  first = rand()%6+1;
  second = rand()%6+1;
  total = first+second;

  printf("What is your name?\n>");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
  printf("Rolling the dice...\n");
  printf("Die 1: %d\n",first);
  printf("Die 2: %d\n",second);
  printf("Total value: %d\n",total);

  return 0;
}

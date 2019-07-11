#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int first,second,total;
  srand(time(NULL));
  first = rand()%6+1;
  second = rand()%6+1;
  total = first+second;

  printf("Rolling the dice...\n");
  printf("Die 1: %d\n",first);
  printf("Die 2: %d\n",second);
  printf("Total value: %d\n",total);

  return 0;
}
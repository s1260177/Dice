#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int first,second,third,fourth,total,total2;
  char name[10];
  srand(time(NULL));
  first = rand()%6+1;
  second = rand()%6+1;
  total = first+second;
   third = rand()%6+1;
  fourth = rand()%6+1;
  total2 = third+fourth;

  printf("What is your name?\n>");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
  printf("Rolling the dice...\n");
  printf("Die 1: %d\n",first);
  printf("Die 2: %d\n",second);
  printf("Total value: %d\n",total);
  if(total>7) printf("%s won!\n",name);
  else printf("%s lost.\n",name);
  
  printf("Rolling more dice\n");
  printf("Die 1: %d\n",third);
  printf("Die 2: %d\n",fourth);
  printf("Total value: %d\n",total2);
  if(total2>7) printf("%s won!\n",name);
  else printf("%s lost.\n",name);

  return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int Dice(int); //サイコロ

int main(){
  srand((unsigned int)time(NULL)); //疑似乱数の種を現在時刻で初期化
  int value=0;
  int i;
  char name[20];

  printf("What is your name?\n");
  printf(">");
  scanf("%s",name);
  printf("Hello, %s!\n",name);

  printf("Rolling the dice...\n");

  for(i=0; i<2; i++)
     value=value+Dice(i+1);

  printf("Total value: %d\n", value);

  if(value>7) printf("%s won!\n", name);
  else printf("%s lost!\n", name);

  return 0;
}

int Dice(int a){
  int num;
  num = rand()%6+1;
  printf("Dice %d: %d\n", a, num);
  return num;
}

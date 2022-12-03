#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  int max = 0;
  int first = 0;
  int second = 0;
  int third = 0;
  int fourth = 0;
  int fifth = 0;
  int horizontal=0;
  int depth=0;
  int aim = 0;
  int total = 0;
  int input[10000];
  char line[10];
  int gamma[5]= {0};
  int epsilon[5] = {0};
  FILE* inFile = fopen("input1.txt","r");
    while(fgets(line,sizeof(line),inFile)!= NULL){
        printf("%s",line);
          if(line[0] == '1'){
            first++;
          }
          if(line[1] == '1'){
            second++;
          }
          if(line[2] == '1'){
            third++;
          }
          if(line[3] == '1'){
            fourth++;
          }if(line[4] =='1'){
            fifth++;
          }
      }
      if(first > 6){
        gamma[0] = 1;
      }else{
        epsilon[0] =1;
      }
      if(second > 6){
        gamma[1] = 1;
      }else{
        epsilon[1] = 1;
      }
      if (third > 6){
        gamma[2] = 1;
      }else{
        epsilon[2] = 1;
      }
      if(fourth > 6){
        gamma[3] = 1;
      }
      else{
        epsilon[3] = 1;
      }
      if(fifth > 6){
        gamma[4] = 1;
      }else{
        epsilon[4] = 1;
      }
      printf("%d\n%d\n%d\n%d\n%d\n",first,second,third,fourth,fifth);
printf("gamma: ");
 for(int i = 0; i < 5; i++){
   printf("%d",gamma[i]);
 }
 printf("epsilon: ");
 for(int i = 0; i < 5; i ++){
   printf("%d", epsilon[i]);
 }
 int decimal = 0;
 int base = 1;
 int temp = atoi(gamma);
 while(temp){
   int lastDigit = temp%10;
   temp=temp/10;
   decimal+=lastDigit*base;
   base=base*2;
 }
 printf("\n%d\n",decimal);
  decimal = 0;
  base = 1;
  temp = ;
 while(temp){
   int lastDigit = temp%10;
   temp=temp/10;
   decimal+=lastDigit*base;
   base=base*2;
 }
 printf("%d",decimal);
}

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
  int sixth = 0;
  int seventh = 0;
  int eighth = 0;
  int ninth = 0;
  int tenth = 0;
  int eleventh = 0;
  int twelfth = 0;
  int horizontal=0;
  int depth=0;
  int aim = 0;
  int total = 0;
  int input[10000];
  char line[13];
  int gamma[13]= {0};
  int epsilon[13] = {0};
  FILE* inFile = fopen("input.txt","r");
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
          if(line[5] == '1'){
            sixth++;
          }if(line[6] == '1'){
            seventh++;
          }if(line[7] == '1'){
            eighth++;
          }if(line[8] == '1'){
            ninth++;
          }if(line[9] == '1'){
            tenth++;
          }if(line[10] == '1'){
            eleventh++;
          }if(line[11] == '1'){
            twelfth++;
          }
      }
      if(first > 500){
        gamma[0] = 1;
      }else{
        epsilon[0] =1;
      }
      if(second > 500){
        gamma[1] = 1;
      }else{
        epsilon[1] = 1;
      }
      if (third > 500){
        gamma[2] = 1;
      }else{
        epsilon[2] = 1;
      }
      if(fourth > 500){
        gamma[3] = 1;
      }
      else{
        epsilon[3] = 1;
      }
      if(fifth > 500){
        gamma[4] = 1;
      }else{
        epsilon[4] = 1;
      }if(sixth > 500){
        gamma[5] = 1;
      }else{
        epsilon[5] = 1;
      }if(seventh > 500){
        gamma[6] = 1;
      }else{
        epsilon[6] = 1;
      }if(eighth > 500){
        gamma[7] = 1;
      }else{
        epsilon[7] = 1;
      }if(ninth > 500){
        gamma[8] = 1;
      }else{
        epsilon[8] = 1;
      }if(tenth > 500){
        gamma[9] = 1;
      }else{
        epsilon[9] = 1;
      }if(eleventh > 500){
        gamma[10] = 1;
      }else{
        epsilon[10] = 1;
      }if(twelfth > 500){
        gamma[11] = 1;
      }else{
        epsilon[11] = 1;
      }
      printf("\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",first,second,third,fourth,fifth,sixth,seventh,eighth,ninth,tenth,eleventh,twelfth);
int decimal;
printf("gamma: ");
 for(int i = 0; i < 12; i++){
   printf("%d",gamma[i]);
 }
 printf("\n");
 printf("epsilon: ");
 for(int i = 0; i < 12; i ++){
   printf("%d", epsilon[i]);
 }
 int pow = 1;
 for(int i =11; i >=0; i--){
   printf("Multiplying bit %d by power % d\n", gamma[i],pow);
   decimal+= pow* gamma[i];
   pow = pow * 2;
 }
 int gam = decimal;
 printf("Gamma is %d", decimal);
 decimal = 0;
 pow = 1;
 for(int i =11; i >=0; i--){
   printf("Multiplying bit %d by power % d\n", epsilon[i],pow);
   decimal+= pow* epsilon[i];
   pow = pow * 2;
 }
 int ep = decimal;
 printf("Epsilon is % d",decimal);
 printf("power consumption = %d",ep*gam);
}

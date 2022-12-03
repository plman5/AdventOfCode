#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  int max = 0;
  int first = 0;
  int second = 0;
  int third = 0;
  int input;
  int total = 0;
  char line[100];
  FILE* inFile = fopen("input.txt","r");
    while(fgets(line,sizeof(line),inFile)!= NULL){
      if(line[0]!= '\n'){
        input = atoi(line);
        total += input;
      }else{
        total = 0;
      }
      if(total > max){
        max = total;
      }
      if(total > first){
        second = first;
        third = second;
        first = total;
      }else if (total < first && total > second){
        third = second;
        second = total;
      }
      else if(total < first && total < second && total > third){
        third = total;
      }
  }
    printf("Total number of calories: %d",first + second + third);
}

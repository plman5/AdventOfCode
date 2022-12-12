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
  int numbers[100];
  int numNums = 0;
  FILE* inFile = fopen("input.txt","r");
    while(fscanf(line,sizeof(line),inFile)!= NULL){
        printf("input%d\n",input);
        numbers[numNums] = input;
        numNums++;
        for(int i = 0; i < numNums; i++){
      for(int j = 0; j < numNums; j++){
        for(int k = 0; k < numNums; k++){
        if(numbers[i] + numbers[j] + numbers[k]== 2020){
          //printf("Numbers to multiply are %d %d, total is %d", numbers[i],numbers[j],numbers[i]*numbers[j] * numbers[k]);
        }
        }
      }
    }
    }

    
}

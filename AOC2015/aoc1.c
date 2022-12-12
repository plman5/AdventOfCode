#include <stdio.h>
#include <stdlib.h>
int main(){
  int input;
  int score = 0;
  char line[100];
  FILE* inFile = fopen("input.txt","r");
    while(fgets(line,sizeof(line),inFile)!= NULL){
      for(int i = 0; i < sizeof(line); i++){
        if(line[i] == '('){
          floors++;
        }else if(line[i] == ')'){
          floors--;
        }
      }
    }
    printf("floor is %d",floor);
}

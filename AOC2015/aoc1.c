#include <stdio.h>
#include <stdlib.h>
int main(){
  int input;
  int score = 0;
  int floors = 0;
  char line[10000] = {' '};
  int pos = 1;
  FILE* inFile = fopen("input.txt","r");
    while(fgets(line,sizeof(line),inFile)!= NULL){
      for(int i = 0; i < 10000; i++){
        if(line[i] == '('){
          floors++;
        }else if(line[i] == ')'){
          floors--;
          if(floors == -1){
            printf("basement is hit at pos %d",pos);
          }
        }
        pos++;
      
      }
    }
}

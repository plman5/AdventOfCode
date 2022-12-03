#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  int input;
  int score = 0;
  char line[4];
  FILE* inFile = fopen("input.txt","r");
    while(fgets(line,sizeof(line),inFile)!= NULL){
      if(line[0]!= '\n'){
        char opponent = line[0];
        char player = line[2];
        printf("%c%c",opponent,player);
        if(opponent == 'A' && player == 'X'){
          score+= 3;
        }
        if(opponent == 'A' && player == 'Y'){
          score+= 4;
        }
        if(opponent == 'A' && player == 'Z'){
          score += 8;
        }
        if(opponent == 'B' && player == 'X'){
          score+= 1;
        }
        if(opponent == 'B' && player == 'Y'){
          score+=5;
        }
        if(opponent == 'B' && player == 'Z'){
          score+=9;
        }
        if(opponent == 'C' && player == 'X'){
          score+= 2;
        }
        if(opponent == 'C' && player == 'Y'){
          score+= 6;
        }
        if(opponent == 'C' && player == 'Z'){
          score +=7;
        }
        printf("score is: %d\n",score);
      }
    }
    printf("total score is %d", score);
}

#include <stdio.h>
#include <stdlib.h>
int main(){
  int xPos = 0;
  int yPos = 0;
  char line[10000] = {' '};
  char direct = ' ';
  int direction= 0;
  int blocks = 0;
  FILE* inFile = fopen("input.txt","r");
    while(fscanf(inFile,"%c%d, ",&direct, &blocks)!= EOF){
      printf("%c%d",direct,blocks);
            switch(direct){
              case 'R':
                direction += 90;
                break;
              case 'L':
                direction -=90;
                break;
            }
            switch(direction){
              case 0:
                yPos += blocks;
                break;
              case 90:
                xPos += blocks;
                break;
              case 180:
                yPos -= blocks;
                break;
              case 270:
                xPos -= blocks;
            }
        }
        printf("you are %d blocks away",xPos + yPos);
    }


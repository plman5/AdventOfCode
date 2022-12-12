#include <stdio.h>
#include <stdlib.h>
int main(){
  char input;
  char grid[200][200] = {'n'};
  int rows = 150;
  int cols = 150;
  int santaRows=150;
  int santaCols=100;
  int roboRows = 150;
  int roboCols = 100;
  int visited = 0;
  int deliveries = 0;
  int santa = 1;
  FILE* inFile = fopen("input.txt","r");
  for(int i = 0; i < 200; i++){
    for(int j = 0; j < 200; j++){
      grid[i][j] = 'n';
    }
  }
    while(fscanf(inFile,"%1c",&input)!= EOF){
    //  printf("%c",input);
      switch(input){
        case '^':
        if(santa){
          grid[santaRows][santaCols] = 'p';
          santaRows--;
          grid[santaRows][santaCols] = 'p';
        }else{
          grid[roboRows][roboCols] = 'p';
          roboRows--;
          grid[roboRows][roboCols] = 'p';
        }
      //  printf("char is %c",input);
        deliveries+=2;
        break;
        case 'v':
        if(santa){
          grid[santaRows][santaCols] = 'p';
          santaRows++;
          grid[santaRows][santaCols] = 'p';
        }else{
          grid[roboRows][roboCols] = 'p';
          roboRows++;
          grid[roboRows][roboCols] = 'p';
        }
        deliveries+=2;
      //  printf("char is %c",input);
        break;
        case '>':
        if(santa){
          grid[santaRows][santaCols] = 'p';
          santaCols++;
          grid[santaRows][santaCols] = 'p';
        }else{
          grid[roboRows][roboCols] = 'p';
          roboCols++;
          grid[roboRows][roboCols] = 'p';
        }
        deliveries+=2;
       // printf("char is %c",input);
        break;
        case '<':
        if(santa){
          grid[santaRows][santaCols] = 'p';
          santaCols--;
          grid[santaRows][santaCols] = 'p';
        }else{
          grid[roboRows][roboCols] = 'p';
          roboCols--;
          grid[roboRows][roboCols] = 'p';
        }
        deliveries+=2;
        break;
      }
      if(santa){
        santa = 0;
      }else{
        santa = 1;
      }
    }
        for(int i = 0; i <=199; i++){
      for(int j = 0; j <=199; j ++){
        if(grid[i][j] == 'p'){
          visited++;
        }
      if(j ==199 ){
        printf("%c\n",grid[i][j]);
      }else{
      printf("%c",grid[i][j]);
      }
      }
    }
    printf("\ntotal is %d",visited);
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int forest[100][100];
char input[100] = {' '};
char inChar;
int rows = 0;
int between[100];
int trees = 0;
int numTrees[100];
int main(){
  int i = 0;
  FILE* inFile = fopen("input.txt","r");
  while(fgets(input,"%s\n",inFile) != EOF){
      for(int i = 0; i < strlen(input); i++){
        forest[rows][i] = input[i] - '0';
        trees++;
      }
      rows++;
      numTrees[i] = trees;
      trees = 0;
      

}
for(int i = 0; i < rows; i++){
  for(int j = 0; j < numTrees[i]; j++){
    if(i != 0 && j != 0 && i != rows && j != numTrees[i]){
      between[i] = forest[i][j];
      
    }
  }
}
}
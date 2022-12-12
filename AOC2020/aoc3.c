#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  int lowBound=0;
  int highBound=0;
  int firstPos=0;
  int secondPos = 0;
  int total = 0;
  int valid = 0;
  char line[100];
  char password[100];
  char key;
  int row=0;
  int col = 0;
  int trees=0;
  FILE* inFile = fopen("input.txt","r");
    while(fgets(line,sizeof(line),inFile)!= NULL){
      printf("%s",line);
    if(line[col] == '#'){
      trees++;
    }
    if(col>=32){
      col = 0;
    }else{
    col+=3;
    }
    
}
printf("trees: %d\n",trees);

}
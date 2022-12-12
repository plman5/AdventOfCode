#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char input[100];
int numDirectories;
int numFiles;
int file;
char directory;
char directories[100][100];
int directorySize[100];
int totalSize = 0;
int directCount = 0;
int containsLetter(const char* input,char search);
int main(){
  int i = 0;
  FILE* inFile = fopen("input.txt","r");
    while(fgets(input,sizeof(input),inFile)!= NULL){
    for(int i = 0; i < sizeof(input); i++){
      printf("%c",input[i]);
    }
    if(input[0] == '$'){
      if(input[2] == 'c'){
        numDirectories++;
          directory = *(input+5);
          if(directory == '/'){
          directory = 0;
          file = 0;
        }
      }else if(input[2] == 'l'){
        directory = *(input +5);
          for(int i = 0; i < sizeof(directories[directory][file])/sizeof(int); i++){
         //   printf("dir %s",directories[i]);
          //  printf("%d %s",directories[i][file],directories[i]);
            for(int j = 0; j < sizeof(directories[i][j]/sizeof(int)); j++){
                directorySize[directCount] = directories[i][j];
            }
            printf("directory %s with size %d",directories[directCount],directorySize[directCount]);
            directCount++;
          }
      }else{

      }
    } 
  }
  return 0;
}
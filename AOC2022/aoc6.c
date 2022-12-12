#include <stdio.h>
#include <string.h>
#include <stdlib.h>



char line[100];

int pairs = 0;
int overlap = 0;
char buffer[14] = {' '};
char input[100];
int numChars = 0;
char found[20] = {' '};
int containsLetter(const char* input,char search);
int main(){
  int i = 0;
  FILE* inFile = fopen("input.txt","r");
    while(fscanf(inFile,"%s",input)!= EOF){
      int j = 0;
        printf("string is %s\n",input);
        char buffer[14] = {' '};
        for(int i = 0; i < 14; i++){
          buffer[i] = input[i];
        }
        printf("Buffer is currently %s\n",buffer);
        for(int i = 14; i <strlen(input); i ++){
            for(int i = 0; i < 13; i++){
              buffer[i] = buffer[i+1];
            }
            buffer[13] = input[i];
            printf("Buffer is currently %s\n",buffer);
            int total =0;
            char search;
            for(int i = 0; i <14; i++){
                
               search = buffer[i];
              // printf("search is %c\n",search);
                if(buffer[i] == search){
                    if(containsLetter(found,search) == 0){
                    found[total] = search;
                    total++;
                    }else{
                      printf("Password %s is invalid! Found chars were %s\n",buffer,found);
                      for(int i = 0; i < strlen(found); i++){
                          found[i] = ' ';
                      }
                      break;
                    }
                    printf("matching chars found at %c and %c for a total of %d\n",buffer[i%4],buffer[i],total);
                    
                  }
      
    }
    if(total == 14){
      printf("password %s is valid after character %d\n", buffer, i+1);
      break;
    }
}
    }
}
int containsLetter(const char* input,char search){
 // printf("\ncheck string is %s\n",input);
  for(int i = 0; i < strlen(input); i++){
    //printf("%c %c",input[i],search);
    if(input[i] == search && input[i] != '\n'){
   //   printf("found char %c",search);
     return 1;
    }else{
  }
  }
  return 0;
}
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
  FILE* inFile = fopen("input1.txt","r");
    while(fscanf(inFile,"%d-%d %c: %s",&firstPos,&secondPos,&key, password)!= EOF){
       printf("%d - %d %c: %s\n",firstPos,secondPos,key,password);
        if(password[firstPos-1] == key && password[secondPos-1] != key){
          valid++;
          printf("password %s is valid\n",password);
        }else if(password[firstPos-1]!=key && password[secondPos-1] == key){
          valid++;
          printf("password %s is valid\n",password);
        }

        
       if(total > highBound || total < lowBound){
              total = 0;
              break;
            }
       if(total <= highBound && total >= lowBound){
          printf("password %s is valid\n",password);
         valid++;
         total=0;
        }

    
}
printf("%d passwords are valid",valid);
}
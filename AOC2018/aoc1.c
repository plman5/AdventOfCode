#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  char line[10];
  int change;
  char op;
  int freq[100];
  int i =0;
  FILE* inFile = fopen("input.txt","r");
    while(fscanf(inFile,"%s",&line)!= EOF){
        op = line[0];
        printf(" operation is %c, change is %c%c",op,line[1],line[2]);
        if(op == '+'){
          freq[i]= atoi(line);
          //printf("freq = %d",freq);
        }else if(op == '-'){
          freq[i]= atoi(line);
          
          //rintf("freq = %d",freq);
        }
        i++;

    }
printf("freq =%d",freq);
    
}

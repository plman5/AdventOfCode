#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  int max = 0;
  int first = 0;
  int second = 0;
  int third = 0;
  int input;
  int horizontal=0;
  int depth=0;
  int aim = 0;
  int total = 0;
  char line[100];
  FILE* inFile = fopen("input1.txt","r");
    while(fgets(line,sizeof(line),inFile)!= NULL){
    if(line[0] == 'f'){
      horizontal+= atoi(&line[8]);
      depth+= (aim* atoi(&line[8]));
      printf("forward %d to position of %d and depth of %d\n",atoi(&line[8]),horizontal,depth);
    }else if(line[0] == 'd'){
      //depth+= atoi(&line[5]);
      aim+= atoi(&line[5]);
      printf("down %d to depth of %d\n" , atoi(&line[5]),depth);
      printf("aim is %d\n",aim);
    }else if(line[0] == 'u'){
      //depth-= atoi(&line[3]);
      aim -= atoi(&line[3]);
      printf("up %d to depth of %d\n",atoi(&line[3]),depth);
      printf("aim is %d\n",aim);
    }
}
printf("multiplication = %d",horizontal * depth);
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int tick;
int reg = 1;
void addx(int x);
void noOp();
char input[100];
int add;
int strength = 0;
int main(){
  int i = 0;
  FILE* inFile = fopen("input.txt","r");
  while(fscanf(inFile,"%s %d\n",input, &add) != EOF){
     if(strcmp(input,"noop") == 0){
      noOp();
     }else{
        addx(add);
     }
}
}
void noOp(){
  tick++;
  if(tick%40 == reg || tick%40 == reg+1 || tick%40 == reg-1){
    printf("#");
   }else{
    printf(".");
   }
    if(tick%40 == 0){
    printf("\n");
  }
  if(tick == 20 || tick == 60 || tick == 100 || tick == 140 || tick == 180 || tick == 220){
        strength += (reg*tick);
        return;
     }
}

void addx(int x){
  tick++;
  if(tick%40 == reg || tick%40 == reg+1 || tick%40 == reg-1){
    printf("#");
   }else{
    printf(".");
   }
   if(tick%40 == 0){
    printf("\n");
  }
  if(tick == 20 || tick == 60 || tick == 100 || tick == 140 || tick == 180 || tick == 220){
        strength += (reg*tick);
        tick++;
        
        reg+=x;
        if(tick%40 == reg || tick%40 == reg+1 || tick%40 == reg-1){
    printf("#");
   }else{
    printf(".");
   }
   if(tick%40 == 0){
    printf("\n");
  }
        return;
     }
  tick++;
  
  
  if(tick == 20 || tick == 60 || tick == 100 || tick == 140 || tick == 180 || tick == 220){
        strength += (reg*tick);
        reg+=x; 
        if(tick%40 == reg || tick%40 == reg+1 || tick%40 == reg-1){
    printf("#");
   }else{
    printf(".");
   }
   if(tick%40 == 0){
    printf("\n");
  }
        return;
     }
    reg+=x; 
    if(tick%40 == reg || tick%40 == reg+1 || tick%40 == reg-1 && reg%40!=0){
    printf("#");
   }else{
    printf(".");
   }
   if(tick%40 == 0){
    printf("\n");
  }
}
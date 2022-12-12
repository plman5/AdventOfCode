#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <vector>


char line[100];

int pairs = 0;
int overlap = 0;
char stack1[10];
char stack2[10];
char stack3[10];
int moveQuant;

int main(){
  std::vector<std::vector<char>> crates{
            {'B', 'Q', 'C'},
            {'R', 'Q', 'W', 'Z'},
            {'B', 'M', 'R', 'L', 'V'},
            {'C', 'Z', 'H', 'V', 'T', 'W'},
            {'D', 'Z', 'H', 'B', 'N', 'V', 'G'},
            {'H', 'N', 'P', 'C', 'J', 'F', 'V', 'Q'},
            {'D', 'G', 'T', 'R', 'W', 'Z', 'S'},
            {'C', 'G', 'M', 'N', 'B', 'W', 'Z', 'P'},
            {'N', 'J', 'B', 'M', 'W', 'Q', 'F', 'P'}
    };
  FILE* inFile = fopen("input.txt","r");
    while(fscanf(inFile,"move %d from %d to %d",&)!= EOF){
      
    
    

    
    
}


}
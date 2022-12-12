#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int first;
int second;
char line[100];
int pairs = 0;
int overlap = 0;
struct elfAssign{
  int first;
  int second;
}typedef elfAssign;
elfAssign elfOne;
elfAssign elfTwo;
int main(){
  
  FILE* inFile = fopen("input.txt","r");
    while(fscanf(inFile,"%d-%d,%d-%d",&elfOne.first,&elfOne.second, &elfTwo.first,&elfTwo.second)!= EOF){
      
      
     // printf("Elf One: %d - %d, Elf Two %d - %d",elfOne.first,elfOne.second,elfTwo.first,elfTwo.second);
    if(elfOne.first <=elfTwo.first && elfOne.second >= elfTwo.second){
        pairs++;
      //  printf("Pair %d made between elfOne, %d - %d, and elfTwo, %d - %d",pairs, elfOne.first,elfOne.second,elfTwo.first,elfTwo.second);
    }else if(elfOne.first >=elfTwo.first && elfOne.second <=elfTwo.second){
      pairs++;
      //printf("Pair %d made between elfOne, %d - %d, and elfTwo, %d - %d",pairs, elfOne.first,elfOne.second,elfTwo.first,elfTwo.second);
    }
    
  //  if(elfOne.first == elfTwo.second || elfOne.second == elfTwo.first){
    //  overlap++;
     // printf("ElfOne: %d - %d ElfTwo: %d - %d overlapped %d times\n",elfOne.first,elfOne.second,elfTwo.first,elfTwo.second,overlap);
    //}
  if(elfOne.first <= elfTwo.first && elfOne.second >=elfTwo.first){
      overlap++;
       printf("ElfOne: %d - %d ElfTwo: %d - %d overlapped %d times\n",elfOne.first,elfOne.second,elfTwo.first,elfTwo.second,overlap);
    }else if(elfOne.first >= elfTwo.first && elfOne.first <= elfTwo.second){
       overlap++;
       printf("ElfOne: %d - %d ElfTwo: %d - %d overlapped %d times\n",elfOne.first,elfOne.second,elfTwo.first,elfTwo.second,overlap);
    }
    
    
}


}
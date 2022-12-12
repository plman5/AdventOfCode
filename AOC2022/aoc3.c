#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int containsLetter(const char* input,char search);
int checkChar(char input);
int main(){
  int input;
  int score = 0;
  char line[100] = {""};
  char sack[100];
  char group[3][100] = {"","",""};
  int length;
  int length1 = 0;
  int length2 = 0;
  int groupIndex = 0; 
  int priority= 0;
  int total;
  int common= 0;
  int count= 0;
  char commonChars[100];
  FILE* inFile = fopen("input1.txt","r");
    while(fgets(line,sizeof(line),inFile)!= NULL){
       char comp1[50] = "";
       char comp2[50] = "";
       priority = 0;
       length = strlen(line);
         for(int i = 0; i < length/2; i++){
           if(comp1[i] == '\n'){
             break;
           }
           comp1[i] = line[i];
         //  comp1+= checkChar(sack[i]);
         }
         int j = 0;
         for(int i = length/2; i<length; i++){
           if(comp2[i] == '\n'){
             break;
           }
           comp2[j] = line[i];
           j++;
          comp2+=checkChar(sack[i]);
        }
         PART ONE
         int length1 = strlen(comp1);
         int length2 = strlen(comp2);
         j = 0;
         int match = 0;
        for(int i = 0; i < length1; i++){
          for(j = 0; j < length2; j++){
            if(comp1[i] ==comp2[j]){
              if(match !=0){
                break;
              }
              printf("common character is %c\n",comp1[i]);
              priority+= checkChar(comp1[i]);
              total += priority;
              break;
            }
         
          }
        }
        printf("%s\n",line);
        printf("Compartment 1: %s\nCompartment 2: %s\n",comp1,comp2);
        printf("priority = %d",priority);



        // PART TWO
          printf("Starting common chars are %s\n",commonChars);
         for(int i = 0; i < strlen(line)-1; i++){
          if(line[i] == '\n'){
          }else{
          group[groupIndex][i] = line[i];
          }
        }
        printf("group number %d is %s Counter is %d \n",groupIndex, group[groupIndex],count);
          count++;
            int found = 0;
            if(groupIndex==2 ){
              length1 = strlen(group[0]);
          length2 = strlen(group[1]);
          for(int i = 0; i < length1; i++){
            for(int j = 0; j < length2; j++){
              if(group[0][i] == group[1][j]){
                    commonChars[common] = group[0][i];
                    common++;
                    break;
              }
            }
          }
          length1 = strlen(group[0]);
          length2 = strlen(group[2]);
          for(int i = 0; i < length1; i++){
            for(int j = 0; j < length2; j++){
              if(group[0][i] == group[2][j]){
                    
                    commonChars[common] = group[0][i];
                    common++;
                    break;
              }       
            }
            }
              for(int i = 0; i < strlen(commonChars); i++){
                  //printf("common chars is %s\n",commonChars);
                  if((containsLetter(group[0],commonChars[i]) == 1) && (containsLetter(group[1],commonChars[i]) == 1) && (containsLetter(group[2],commonChars[i]) == 1)){
                    //  printf("Letter %c is in common",commonChars[i]);
                    //  trueCommon[i] = commonChars[i];
                      priority += checkChar(commonChars[i]);
                      printf("priority is %d when adding %c\n",priority, commonChars[i]);
                      groupIndex=0;
                      
                      //common = 0;
                    
                     common = 0;
                     break;
                  }
              }
                  for(int i = 0; i < strlen(group[0]); i++){
                    if(containsLetter(commonChars,group[0][i]) == 0){
                      for(int j = 0; j < strlen(commonChars)-1; j++){
                          if(commonChars[j] == group[0][i]){
                            commonChars[j] = ' ';
                            common--;
                          }
                      }
                    }
                  }
                  for(int i = 0; i < strlen(group[1]); i++){
                    if(containsLetter(commonChars,group[1][i]) == 0){
                      for(int j = 0; j < strlen(commonChars)-1; j++){
                          if(commonChars[j] == group[1][i]){
                            commonChars[j] = ' ';
                            common--;
                          }
                      }
                    }
                  }
                  for(int i = 0; i < strlen(group[2]); i++){
                    if(containsLetter(commonChars,group[2][i]) == 0){
                      for(int j = 0; j < strlen(commonChars)-1; j++){
                          if(commonChars[j] == group[2][i]){
                            commonChars[j] = ' ';
                            common--;
                          }
                      }
                    }
                  }
                  //commonChars[0] = ' ';
                 
                
                  printf("priority is %d",priority);
          for(int i = 0; i < strlen(group[0]); i++){
           group[0][i] = ' ';
          }
          for(int i = 0; i < strlen(group[1]); i++){
             group[1][i] = ' ';
          }
          for(int i = 0; i < strlen(group[2]); i++){
             group[2][i] = ' ';
          }
          for(int i = 0; i <strlen(commonChars); i++){
              commonChars[i] = ' ';
            }
           // common = 0;
            groupIndex = 0;
              }else{
                
                groupIndex++;
              }
           //printf("\ncommon chars are %s\n",commonChars);
            for(int i = 0; i < strlen(line); i++){
              line[i] = ' ';
            }
            }
          
         
         // printf("%s %s",group[0], group[1]);
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
int checkChar(char input){
  int values[52] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52};
  switch(input){
    case 'a':
    return 1;
//    break;
    case 'b':
    return 2;
//    break;
    case 'c':
    return 3;
//    break;
    case 'd':
    return 4;
//    break;
    case 'e':
    return 5;
//    break;
    case 'f':
    return 6;
//    break;
    case 'g':
    return 7;
//    break;
    case 'h':
    return 8;
//    break;
    case 'i':
    return 9;
//    break;
    case 'j':
    return 10;
//    break;
    case 'k':
    return 11;
//    break;
    case 'l':
    return 12;
//    break;
    case 'm':
    return 13;
//    break;
    case 'n':
    return 14;
//    break;
    case 'o':
    return 15;
//    break;
    case 'p':
    return 16;
 //   break;
    case 'q':
    return 17;
  //  break;
    case 'r':
    return 18;
   // break;
    case 's':
    return 19;
//    break;
    case 't':
    return 20;
 //   break;
    case 'u':
    return 21;
  //  break;
    case 'v':
    return 22;
   // break;
    case 'w':
    return 23;
   // break;
    case 'x':
   // break;
    return 24;
//    break;
    case 'y':
    return 25;
//    break;
    case 'z':
    return 26;
//    break;
    case 'A':
    return 27;
//    break;
    case 'B':
    return 28;
//    break;
    case 'C':
    return 29;
//    break;
    case 'D':
    return 30;
//    break;
    case 'E':
    return 31;
 //   break;
    case 'F':
    return 32;
 //   break;
    case 'G':
    return 33;
 //   break;
    case 'H':
    return 34;
 //   break;
    case 'I':
    return 35;
 //   break;
    case 'J':
    return 36;
 //   break;
    case 'K':
    return 37;
 //   break;
    case 'L':
    return 38;
 //   break;
    case 'M':
    return 39;
 //   break;
    case 'N':
    return 40;
  //  break;
    case 'O':
    return 41;
    //break;
    case 'P':
    return 42;
   // break;
    case 'Q':
    return 43;
 //   break;
    case 'R':
    return 44;
//    break;
    case 'S':
    return 45;
 ///   break;
    case 'T':
    return 46;
  //  break;
    case 'U':
    return 47;
  ///  break;
    case 'V':
    return 48;
//    break;
    case 'W':
    return 49;
//    break;
    case 'X':
    return 50;
//    break;
    case 'Y':
    return 51;
 //   break;
    case 'Z':
    return 52;
  //  break;
    default:
    return 0;
    //break;
  }
}

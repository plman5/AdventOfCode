#include <stdio.h>
#include <stdlib.h>
int main(){
  int input;
  int score = 0;
  int length = 0;
  int width = 0;
  int height = 0;
  int firstSide;
  int secondSide;
  int thirdSide;
  char line[15] = {' '};
  int surfaceArea = 0;
  int lowest = 0;
  int total = 0;
  int ribbon = 0;
  int firstPerimeter = 0;
  int secondPerimeter = 0;
  int thirdPerimeter = 0;
  FILE* inFile = fopen("input.txt","r");
    while(fscanf(inFile,"%dx%dx%d",&length, &width, &height)!= EOF){
      printf("length is %d, width is %d, height is %d\n",length,width,height);
      firstSide = length*width;
      secondSide = width*height;
      thirdSide = height*length;
      surfaceArea +=  (2*firstSide) + (2 *secondSide) + (2 * thirdSide);
      printf("surface area is %d\n",surfaceArea); 
      if(firstSide <= secondSide && firstSide <= thirdSide){
        lowest = firstSide;
      }else if(secondSide <= firstSide && secondSide <= thirdSide){
        lowest = secondSide;
      }else if (thirdSide<= firstSide && thirdSide <= secondSide){
        lowest = thirdSide;
      }
      printf("lowest = %d\n",lowest);
      firstPerimeter = 2*length + 2 * width;
      secondPerimeter = 2 * height + 2 * width;
      thirdPerimeter = 2 * height + 2 * length;
      total += (surfaceArea + lowest);
      if(firstPerimeter <= secondPerimeter && firstPerimeter <= thirdPerimeter){
        lowest = firstPerimeter;
      }else if(secondPerimeter <= firstPerimeter && secondPerimeter <= thirdPerimeter){
        lowest = secondPerimeter;
      }else if (thirdPerimeter<= firstPerimeter&& thirdPerimeter<= secondPerimeter){
        lowest = thirdPerimeter;
      }
      ribbon += lowest;
      ribbon += length * width * height;
      surfaceArea = 0;
    }
    printf("total area is %d, ribbon is %d",total,ribbon);
}

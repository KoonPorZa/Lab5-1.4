#include <stdio.h>
#include <math.h>
int main(void){
  int x,y;
  float score;
  scanf("%f",&score);
  x = round(score);
  y = round(score);
  if(x>=0 && x<=100){
    switch(x/10){
      case 10 : printf("A"); break;
      case 9 : printf("A"); break;
      case 8 : printf("A"); break;
      case 7 : 
      if(y>=75 && y<80) printf("B+");
      else if(y>=70 && y<75) printf("B"); break;
      case 6 : 
      if(y>=65 && y<70) printf("C+");
      else if(y>=60 && y<65) printf("C"); break;
      case 5 : 
      if(y>=55 && y<60) printf("D+");
      else if(y>=50 && y<55) printf("D"); break;
      default : printf("F");
    }
  }
  else{
    printf("Error!");
  }
  return 0;
}
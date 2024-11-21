#include<stdio.h>

int main(){
  float height , width , perimeter ;
  
  printf("ENTER THE HEIGHT OF THE RECTANGLE :");
  scanf("%f",&height);
  
   printf("ENTER THE WIDTH OF THE RECTANGLE :");
  scanf("%f",&width);
  
  perimeter=2 * (height + width);
  
  printf("THE PERIMETER OF THE RECTANGLE :%.2f\n",perimeter);
  
  return 0;
}

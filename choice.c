
#include <stdio.h>

int main() {
  float mile,kilo;
  printf("Enter 1 to convert kilometer to mile and enter 2 to convert mile to kilometer...\n");
  int c; //to take the choice
  scanf("%d",&c);
  if(c==1)
  {printf("Enter the distance in kilometers ");
    scanf("%f",&kilo); 
    mile=0.62137*kilo; //killometer to miles
      printf("\nThe distance in mile is = %f miles",mile);
  }
  else if(c==2)
  {printf("\nEnter the distance in miles");
    scanf("%f",&mile); 
 kilo=1.609*mile; // mile to killometer
      printf("\nThe distance in mile is = %f kilometer",kilo);
  }
  else
       { printf("\nInvalid Input"); //wrong choice
      }  return 0;
}
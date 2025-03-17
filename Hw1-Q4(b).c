#include<stdio.h>
#include<math.h>

void computeHomeValue(void);
int main(void)
{
	computeHomeValue();
	return 0;
}

void computeHomeValue(void)
{
   int popularity;
   int size;
   int home_value;
   
   printf("Enter the popularity: \n");
   scanf("%d", &popularity);
   printf("Enter the size: \n");
   scanf("%d", &size);
   
   home_value = (pow(popularity,3) + pow(size,2)) * 10000;
   
   printf("Home value is: %d\n", home_value);
}

#include<stdio.h>
#include<math.h>

int computeHomeValue (int popularity, int size);
int main(void)

{
	int popularity;
	int size;
	int result;
	printf("Enter the popularity:\n");
	scanf("%d", &popularity);
	printf("Enter the size: \n");
    scanf("%d", &size);
    
    result = computeHomeValue (popularity, size);
   
    printf("Home value is %d\n", result);
    return 0;
}

    int computeHomeValue (int popularity,int size)
   
 {
 	int home_value;
 	home_value =(int)((pow(popularity,3) + pow(size,2)) * 10000);
 	return home_value;	
	}   
    

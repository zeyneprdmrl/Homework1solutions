#include <stdio.h>
#include <math.h>

int ComputeHomeValue(int popularity, int size);

int main(void)
{
    int popularity, size, HomeValue;

    printf("Enter your popularity:\n");
    scanf("%d", &popularity);

    printf("Enter your size:\n");
    scanf("%d", &size);

    
    HomeValue = ComputeHomeValue(popularity, size);

    
    printf("Your home value is: %d\n", HomeValue);

    return 0;
}

int ComputeHomeValue(int popularity, int size)
{
    int HomeValue;  

   
    HomeValue=(int)((pow(popularity, 3) + pow(size, 2)) * 10000);

    return HomeValue;
}
#include <stdio.h>
#include <math.h>
 
void computeHomeValue();
 

int main()
{
    computeHomeValue(); 

    return(0);
}

void
computeHomeValue()
{
    int popularity;
    int size;
    int homeValue;
    
    printf("Enter your popularity:\n");
    scanf("%d", &popularity);
    
    printf("Enter your size:\n");
    scanf("%d", &size),
    
    homeValue=((pow(popularity,3)+pow(size,2))*1000);
    
    printf("Your home value:%d\n", homeValue);

}
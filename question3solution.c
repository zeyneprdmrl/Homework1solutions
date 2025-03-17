#include <stdio.h>
#include <math.h>

int main(void)
 {
    int popularity, size;
    int homeValue;

    
    printf("Enter popularity:\n ");
    scanf("%d", &popularity);

    printf("Enter size\n");
    scanf("%d", &size);

    
    homeValue = ((pow(popularity, 3) + pow(size, 2)) * 10000);

    
    printf("Home value is: %d\n", homeValue);

    return 0;
}
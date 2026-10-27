#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf("Enter a number:");
    scanf("%f",&a);
   printf("double of%.2f is:%.2f,and its half is:%.2f\n",a,a*2,a/2);
    return 0;
}

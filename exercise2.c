#include <stdio.h>
#include <stdlib.h>

int main()
{int total_seconds;
int hours,minutes,seconds;
int remaining_seconds;
    printf("enter time in seconds:");
    scanf("%d",&total_seconds);
    hours=total_seconds/3600;
    remaining_seconds=total_seconds%3600;
    minutes=remaining_seconds/60;
    seconds=remaining_seconds%60;
    printf("%d seconds = %d hours,%d minutes,and %d seconds\n",total_seconds,hours,minutes,seconds);

    return 0;
}

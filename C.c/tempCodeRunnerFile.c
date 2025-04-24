#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int x,y,i,count=0;
    scanf("%d",&x);
    scanf("%d",&y);
    while(y!=0)
    {
        if(y%x!=0)
         count++;
        else 
            break;
        y=y%x;
    }
    printf("%d",count);
    return 0;
}


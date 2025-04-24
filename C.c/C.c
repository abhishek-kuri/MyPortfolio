#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    if(y<=x)
    printf("0");
    else
    {y=y/x;
    printf("%d",y);}
    return 0;
}

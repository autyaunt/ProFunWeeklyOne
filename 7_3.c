#include <stdio.h>
int main()
{
    double x,y,z;
    scanf("%lf %lf %lf",&x,&y,&z);
    if (x>=y && x>=z)
    {
        printf("%lf",x);
    }
    else if (y>=z && y>=x)
    {
        printf("%lf",y);
    }
    else if (z>=x && z>=z)
    {
        printf("%lf",z);
    }  
    else
    {
        printf("ERROR");
    }
    return 0;

}
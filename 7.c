#include <stdio.h>
int main()
{
    double x,y,z;
    scanf("%lf %lf %lf",&x,&y,&z);

    if ( (char)x !=x || (char)y != y || (char)z != z )
    {
         printf("please press NUMBER");
            return 0;
    }

    if (x>=y && y>=z)
    {
        printf("%lf",x);
    }
    else if (x>=z && z>=y)
    {
        printf("%lf",x);
    }
    else if (y>=x && x>=z)
    {
        printf("%lf",y);
    }
    else if (y>=z && z>=x)
    {
        printf("%lf",y);
    }
    else if (z>=x && x>=y)
    {
        printf("%lf",z);
    }
    else if (z>=y && y>=x)
    {
        printf("%lf",z);
    }
    else
    {
        printf("ERROR");
    }

    return 0;

}
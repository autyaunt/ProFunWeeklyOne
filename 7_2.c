#include<stdio.h>
int main()
{
    double x[10];
    double y;
    int z=0;
    double max;
    for (int i = 0; i < 3; i++)
    {
        scanf("%lf",&x[i]);
    }
    
    
    max = x[0];
    for (int i = 1; i < 3; i++)
    {
        if (max <= x[i])
        {
            max = x[i];
        } 
    }
     printf("%lf",max);

     return 0;
}
#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,x1,x2,delta;
    scanf("%f%f%f", &a, &b, &c);
    if(a == 0 && b == 0 && c != 0) printf("NO");
    else if(a == 0 && b != 0 && c == 0) printf("0");
    else if(a == 0 && b != 0 && c != 0)
    {
        x1 = x2 = (double)-c/b;
        printf("%.2f", x1);
    }
    else if(a != 0 && b != 0 && c != 0)
    {
        delta = pow(b,2)-4*a*c;
        if(delta < 0) printf("NO");
        else if(delta == 0){
            x1 = x2 = (double)-b/(2*a);
            printf("%.2f", x1);
        } 
        else 
        {
            x1 = (double)(-b+sqrt(delta))/(2*a);
            x2 = (double)(-b-sqrt(delta))/(2*a);
            printf("%.2f %.2f", x1, x2);
        }
    }
    return 0;
}


#include <stdio.h>
#include <math.h>

int Min(int a, int b)
{
    int Minimum = (a<b) ? a : b;
    return Minimum;
}

int Max(int a, int b)
{
    int Maximum = (a>b) ? a : b;
    return Maximum;
}

int main()
{
    int a1, b1, u1, v1, a2, b2, u2, v2;//a1,b1,u1,v1-trái dưới, phải trên của hcn1 
    scanf("%d %d %d %d %d %d %d %d",&a1,&b1,&u1,&v1,&a2,&b2,&u2,&v2);
    int minX = Min(Min(a1, a2), Min(u1, u2)),
        minY = Min(Min(b1, b2), Min(v1, v2)),
        maxX = Max(Max(a1, a2), Max(u1, u2)),
        maxY = Max(Max(b1, b2), Max(v1, v2));
    int AB = sqrt((maxY - minY) * (maxY - minY)),
        BC = sqrt((maxX - minX) * (maxX - minX)),
        CD = sqrt((minY - maxY) * (minY - maxY)),
        AD = sqrt((maxX - minX) * (maxX - minX));

    if(AB < BC && CD < AD)
    {
        AB+=(BC-AB);
        CD+=(AD-CD);
    }
    else if(BC < AB && AD < CD)
    {
        BC+=(AB-BC);
        AD+=(CD-AD);
    }
    long long ans;
    if (AB == BC && AB == CD && AB == AD && BC == CD && BC == AD && CD == AD)
    {
        ans = pow(AB, 2);
        printf("%lld",ans);
    }
    return 0;
}

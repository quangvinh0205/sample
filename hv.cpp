#include <stdio.h>
#include <math.h>

int main()
{
    int tc;scanf("%d",&tc);
    while(tc--)
    {
        int x1,y1,x2,y2;
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        if(x1 < x2 && y1 < y2)
        {
            double AB = sqrt((y2 - y1) * (y2 - y1)), 
                BC = sqrt((x2 - x1) * (x2 - x1)), 
                CD = sqrt((y1 - y2) * (y1 - y2)), 
                AD = sqrt((x2 - x1) * (x2 - x1));
            if (AB == BC && AB == CD && AB == AD && BC == CD && BC == AD && CD == AD)
            printf("YES\n");
            else printf("NO\n");
        }
    }
    return 0;
}




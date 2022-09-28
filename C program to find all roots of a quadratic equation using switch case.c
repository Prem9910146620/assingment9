#include<stdio.h>
#include<math.h>
main()
{
    int i,c,x,a,b,m,y;
    printf("enter the number=1\n");
    scanf("%d",&i);
    switch(i)
    {
    case 1:
        printf("enter three number=");
        scanf("%d%d%d",&a,&b,&c);
        m=b*b-4*a*c;
        if(m<0)
            printf("roots are imaginary");
        else
        x=(-b+sqrt(m))/2*a;
        y=(-b-sqrt(m))/2*a;
        printf(" \n x=%d \n y=%d ",x,y);

    }
    return 0;
}

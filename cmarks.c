#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a,b,c,d,t,x;
 float per;
 printf("Enter the marks of four subjects out of 100 ");
 scanf("%d %d %d %d",&a,&b,&c,&d);
 t=a+b+c+d;
 per=t/4;

 if((a>b) && (a>c) && (a>d))
    {
        if ((b>c) && (b>d))
             printf("%f %d",per,b);
        else if ((c>b) && (c>d))
             printf("%f %d",per,c);
        else if ((d>b) && (d>c))
             printf("%f %d",per,d);
    }
    else if((b>a) && (b>c) && (b>d))
    {
        if ((a>c) && (a>d))
             printf("%f %d",per,a);
        else if ((c>a) && (c>d))
             printf("%f %d",per,c);
        else if ((d>a) && (d>c))
             printf("%f %d",per,d);
    }
    else if((c>a) && (c>b) && (c>d))
    {
        if ((a>b) && (a>d))
             printf("%f %d",per,a);
        else if ((b>a) && (b>d))
             printf("%f %d",per,b);
        else if ((d>a) && (d>b))
             printf("%f %d",per,d);
    }
    else if((d>a) && (d>b) && (d>c))
    {
        if ((c>a) && (c>b))
             printf("%f %d",per,c);
        else if ((b>a) && (b>c))
             printf("%f %d",per,b);
        else if ((a>b) && (a>c))
             printf("%f %d",per,a);

}
 return 0;
}









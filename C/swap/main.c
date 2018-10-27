#include <stdio.h>
#include <stdlib.h>
void interchange(int * u,int * v);
int main()
{
    int x=5,y=19;
    printf("%d,%d\n",x,y);
    printf("%p,%p\n",&x,&y);
    interchange(&x,&y);
    printf("%d,%d\n",x,y);
    printf("%p,%p\n",&x,&y);//x,y的地址没有变
    return 0;
}
void interchange(int * u, int * v)
{
    int temp;
    temp = *u;
    *u=*v;
    *v=temp;
}

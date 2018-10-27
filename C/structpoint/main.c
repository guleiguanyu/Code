#include <stdio.h>
#include <stdlib.h>

int main()
{
   typedef struct {
    int x;
    struct b *next;
    }b;

    b a[3]={5,&a[1],14,&a[2],19,"\0"},*p;
    p=&a[0];
    printf("++p:%d\n",++p->x);
    printf("%d\n",p->x);
    printf("x++:%d\n",p->x++);
    printf("%d\n",p->x);
    printf("p++:%d\n",p++->x);
    printf("%d\n",p->x);
   // printf("%d\n",(*(p->next)).x);
    return 0;
}

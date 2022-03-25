#include <stdio.h>
#include <stdlib.h>///qsort()
int comp(const void*p1,const void*p2)
{
    int a=*(int*)p1,b=*(int*)p2;///比較常用的函式comp()
    if(a>b) return +1;
    if(a<b) return -1;///三種狀況
    if(a==b) return 0;///口訣:減法a-b
}
int main()
{
    int a[100];///內附亂碼
    for(int i=0;i<100;i++) printf("%d ",a[i]);
    printf("\n");

    qsort(a,100,sizeof(int),comp);
    for(int i=0;i<100;i++) printf("%d ",a[i]);
    printf("\n");
    return 0;
}

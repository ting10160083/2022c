#include <stdio.h>
#include <stdlib.h>///qsort()
int comp(const void*p1,const void*p2)
{
    int a=*(int*)p1,b=*(int*)p2;///����`�Ϊ��禡comp()
    if(a>b) return +1;
    if(a<b) return -1;///�T�ت��p
    if(a==b) return 0;///�f�Z:��ka-b
}
int main()
{
    int a[100];///�����ýX
    for(int i=0;i<100;i++) printf("%d ",a[i]);
    printf("\n");

    qsort(a,100,sizeof(int),comp);
    for(int i=0;i<100;i++) printf("%d ",a[i]);
    printf("\n");
    return 0;
}

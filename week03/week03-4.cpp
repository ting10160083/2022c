#include <stdio.h>
char line[2000];
int main()
{
    int t=1;///1�@�}�l�O�����Y ���α���
    while(scanf("%s",line)==1){///���w���� ��while
       if(t>1) printf("\n");///�᭱�����[ ������
       printf("���[%dŪ��@�����\n",t);
       t++;
    }
    return 0;
}

#include <stdio.h>
char line[300];
int main()
{
    printf("請照著打: -256 0.0000 45646856164185165416145\n");
    int n;
    float f;
    scanf("%d %f %s",&n,&f,line);
    printf("我們讀到了整數:%d\n",n);
    printf("我們讀到了整數:%f\n",f);
    printf("我們讀到了整數:%s\n",line);
}

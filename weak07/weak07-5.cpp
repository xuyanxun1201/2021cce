#include <stdio.h>
int main()
{
    int i;
    for(i=0;i<=3;i++)///1973年的c發明者的寫法,1989年ANSI C規範
    {
        printf("有幾次呢?\n");
    }///印四次
    ///1998/1999新寫法
    for(int i=0;i<3;i++)
    {
        printf("老師推薦的寫法,有幾次?\n");
    }///印三次
}


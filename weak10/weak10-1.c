#include <stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
    int ans=0;
    for(int i=2;i<=m;i++)
    {
        int a=0;
        for(int j=2;j<i;j++){
            if(i%j==0)a=1;
        }
        if(a==0){
            ans++;
            printf("%d ",i);
        }
    }
    printf("\n Ans: %d \n",ans);
}

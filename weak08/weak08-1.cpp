#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int sum=0,p=1;
	for(int i=1;i<=n;i++){
		p=p*i;
		sum=sum+p;
	}
	printf("%d",sum);
}

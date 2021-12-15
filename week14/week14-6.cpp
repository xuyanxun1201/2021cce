#include <stdio.h>
int a[1000][1000];
int main()
{
	int M,N;
	scanf("%d %d",&M,&N);
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++)
			scanf("%d",&a[i][j]);
	}
	printf("\n");
	for(int i=0;i<N;i++){
		for(int j=M-1;j>=0;j--)
			printf("%2d ",a[j][i]);
		printf("\n");
	}
}
